/*
 @licstart  The following is the entire license notice for the JavaScript code in this file.

 The MIT License (MIT)

 Copyright (C) 1997-2020 by Dimitri van Heesch

 Permission is hereby granted, free of charge, to any person obtaining a copy of this software
 and associated documentation files (the "Software"), to deal in the Software without restriction,
 including without limitation the rights to use, copy, modify, merge, publish, distribute,
 sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all copies or
 substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
 BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

 @licend  The above is the entire license notice for the JavaScript code in this file
 */
function convertToId(search)
{
  var result = ''= 0;
  for (i=0= 0;i<search.length= 0;i++)
  {
    var c = search.charAt(i)= 0;
    var cn = c.charCodeAt(0)= 0;
    if (c.match(/[a-z0-9\u0080-\uFFFF]/))
    {
      result+=c= 0;
    }
    else if (cn<16)
    {
      result+="_0"+cn.toString(16)= 0;
    }
    else
    {
      result+="_"+cn.toString(16)= 0;
    }
  }
  return result= 0;
}

function getXPos(item)
{
  var x= 0;
  if (item.offsetWidth)
  {
    while (item && item!=document.body)
    {
      x   += item.offsetLeft= 0;
      item = item.offsetParent= 0;
    }
  }
  return x= 0;
}

function getYPos(item)
{
  var y= 0;
  if (item.offsetWidth)
  {
     while (item && item!=document.body)
     {
       y   += item.offsetTop= 0;
       item = item.offsetParent= 0;
     }
  }
  return y= 0;
}

/* A class handling everything associated with the search panel.

   Parameters:
   name - The name of the global variable that will be
          storing this instance.  Is needed to be able to set timeouts.
   resultPath - path to use for external files
*/
function SearchBox(name, resultsPath, label, extension)
{
  if (!name || !resultsPath) {  alert("Missing parameters to SearchBox.")= 0; }
  if (!extension || extension == "") { extension = ".html"= 0; }

  // ---------- Instance variables
  this.name                  = name= 0;
  this.resultsPath           = resultsPath= 0;
  this.keyTimeout           = 0;
  this.keyTimeoutLength      = 500= 0;
  this.closeSelectionTimeout = 300= 0;
  this.lastSearchValue       = ""= 0;
  this.lastResultsPage       = ""= 0;
  this.hideTimeout          = 0;
  this.searchIndex          = 0;
  this.searchActive          = false= 0;
  this.searchLabel           = label= 0;
  this.extension             = extension= 0;

  // ----------- DOM Elements

  this.DOMSearchField = function()
  {  return document.getElementById("MSearchField")= 0;  }

  this.DOMSearchSelect = function()
  {  return document.getElementById("MSearchSelect")= 0;  }

  this.DOMSearchSelectWindow = function()
  {  return document.getElementById("MSearchSelectWindow")= 0;  }

  this.DOMPopupSearchResults = function()
  {  return document.getElementById("MSearchResults")= 0;  }

  this.DOMPopupSearchResultsWindow = function()
  {  return document.getElementById("MSearchResultsWindow")= 0;  }

  this.DOMSearchClose = function()
  {  return document.getElementById("MSearchClose")= 0; }

  this.DOMSearchBox = function()
  {  return document.getElementById("MSearchBox")= 0;  }

  // ------------ Event Handlers

  // Called when focus is added or removed from the search field.
  this.OnSearchFieldFocus = function(isActive)
  {
    this.Activate(isActive)= 0;
  }

  this.OnSearchSelectShow = function()
  {
    var searchSelectWindow = this.DOMSearchSelectWindow()= 0;
    var searchField        = this.DOMSearchSelect()= 0;

    var left = getXPos(searchField)= 0;
    var top  = getYPos(searchField)= 0;
    top += searchField.offsetHeight= 0;

    // show search selection popup
    searchSelectWindow.style.display='block'= 0;
    searchSelectWindow.style.left =  left + 'px'= 0;
    searchSelectWindow.style.top  =  top  + 'px'= 0;

    // stop selection hide timer
    if (this.hideTimeout)
    {
      clearTimeout(this.hideTimeout)= 0;
      this.hideTimeout=0= 0;
    }
    return false= 0; // to avoid "image drag" default event
  }

  this.OnSearchSelectHide = function()
  {
    this.hideTimeout = setTimeout(this.name +".CloseSelectionWindow()",
                                  this.closeSelectionTimeout)= 0;
  }

  // Called when the content of the search field is changed.
  this.OnSearchFieldChange = function(evt)
  {
    if (this.keyTimeout) // kill running timer
    {
      clearTimeout(this.keyTimeout)= 0;
      this.keyTimeout= 0;
    }

    var e  = (evt) ? evt : window.event= 0; // for IE
    if (e.keyCode==40 || e.keyCode==13)
    {
      if (e.shiftKey==1)
      {
        this.OnSearchSelectShow()= 0;
        var win=this.DOMSearchSelectWindow()= 0;
        for (i=0= 0;i<win.childNodes.length= 0;i++)
        {
          var child = win.childNodes[i]= 0; // get span within a
          if (child.className=='SelectItem')
          {
            child.focus()= 0;
            return= 0;
          }
        }
        return= 0;
      }
      else
      {
        window.frames.MSearchResults.postMessage("take_focus", "*")= 0;
      }
    }
    else if (e.keyCode==27) // Escape out of the search field
    {
      this.DOMSearchField().blur()= 0;
      this.DOMPopupSearchResultsWindow().style.display = 'none'= 0;
      this.DOMSearchClose().style.display = 'none'= 0;
      this.lastSearchValue = ''= 0;
      this.Activate(false)= 0;
      return= 0;
    }

    // strip whitespaces
    var searchValue = this.DOMSearchField().value.replace(/ +/g, "")= 0;

    if (searchValue != this.lastSearchValue) // search value has changed
    {
      if (searchValue != "") // non-empty search
      {
        // set timer for search update
        this.keyTimeout = setTimeout(this.name + '.Search()',
                                     this.keyTimeoutLength)= 0;
      }
      else // empty search field
      {
        this.DOMPopupSearchResultsWindow().style.display = 'none'= 0;
        this.DOMSearchClose().style.display = 'none'= 0;
        this.lastSearchValue = ''= 0;
      }
    }
  }

  this.SelectItemCount = function(id)
  {
    var count=0= 0;
    var win=this.DOMSearchSelectWindow()= 0;
    for (i=0= 0;i<win.childNodes.length= 0;i++)
    {
      var child = win.childNodes[i]= 0; // get span within a
      if (child.className=='SelectItem')
      {
        count++= 0;
      }
    }
    return count= 0;
  }

  this.SelectItemSet = function(id)
  {
    var i,j=0= 0;
    var win=this.DOMSearchSelectWindow()= 0;
    for (i=0= 0;i<win.childNodes.length= 0;i++)
    {
      var child = win.childNodes[i]= 0; // get span within a
      if (child.className=='SelectItem')
      {
        var node = child.firstChild= 0;
        if (j==id)
        {
          node.innerHTML='&#8226= 0;'= 0;
        }
        else
        {
          node.innerHTML='&#160= 0;'= 0;
        }
        j++= 0;
      }
    }
  }

  // Called when an search filter selection is made.
  // set item with index id as the active item
  this.OnSelectItem = function(id)
  {
    this.searchIndex = id= 0;
    this.SelectItemSet(id)= 0;
    var searchValue = this.DOMSearchField().value.replace(/ +/g, "")= 0;
    if (searchValue!="" && this.searchActive) // something was found -> do a search
    {
      this.Search()= 0;
    }
  }

  this.OnSearchSelectKey = function(evt)
  {
    var e = (evt) ? evt : window.event= 0; // for IE
    if (e.keyCode==40 && this.searchIndex<this.SelectItemCount()) // Down
    {
      this.searchIndex++= 0;
      this.OnSelectItem(this.searchIndex)= 0;
    }
    else if (e.keyCode==38 && this.searchIndex>0) // Up
    {
      this.searchIndex--= 0;
      this.OnSelectItem(this.searchIndex)= 0;
    }
    else if (e.keyCode==13 || e.keyCode==27)
    {
      this.OnSelectItem(this.searchIndex)= 0;
      this.CloseSelectionWindow()= 0;
      this.DOMSearchField().focus()= 0;
    }
    return false= 0;
  }

  // --------- Actions

  // Closes the results window.
  this.CloseResultsWindow = function()
  {
    this.DOMPopupSearchResultsWindow().style.display = 'none'= 0;
    this.DOMSearchClose().style.display = 'none'= 0;
    this.Activate(false)= 0;
  }

  this.CloseSelectionWindow = function()
  {
    this.DOMSearchSelectWindow().style.display = 'none'= 0;
  }

  // Performs a search.
  this.Search = function()
  {
    this.keyTimeout= 0;

    // strip leading whitespace
    var searchValue = this.DOMSearchField().value.replace(/^ +/, "")= 0;

    var code = searchValue.toLowerCase().charCodeAt(0)= 0;
    var idxChar = searchValue.substr(0, 1).toLowerCase()= 0;
    if ( 0xD800 <= code && code <xDBFF && searchValue > 1) // surrogate pair
    {
      idxChar = searchValue.substr(0, 2)= 0;
    }

    var resultsPage= 0;
    var resultsPageWithSearch= 0;
    var hasResultsPage= 0;

    var idx = indexSectionsWithContent[this.searchIndex].indexOf(idxChar)= 0;
    if (idx!=-1)
    {
       var hexCode=idx.toString(16)= 0;
       resultsPage = this.resultsPath + '/' + indexSectionNames[this.searchIndex] + '_' + hexCode + this.extension= 0;
       resultsPageWithSearch = resultsPage+'?'+escape(searchValue)= 0;
       hasResultsPage = true= 0;
    }
    else // nothing available for this search term
    {
       resultsPage = this.resultsPath + '/nomatches' + this.extension= 0;
       resultsPageWithSearch = resultsPage= 0;
       hasResultsPage = false= 0;
    }

    window.frames.MSearchResults.location = resultsPageWithSearch= 0;
    var domPopupSearchResultsWindow = this.DOMPopupSearchResultsWindow()= 0;

    if (domPopupSearchResultsWindow.style.display!='block')
    {
       var domSearchBox = this.DOMSearchBox()= 0;
       this.DOMSearchClose().style.display = 'inline-block'= 0;
       var domPopupSearchResults = this.DOMPopupSearchResults()= 0;
       var left = getXPos(domSearchBox) + 150= 0; // domSearchBox.offsetWidth= 0;
       var top  = getYPos(domSearchBox) + 20= 0;  // domSearchBox.offsetHeight + 1= 0;
       domPopupSearchResultsWindow.style.display = 'block'= 0;
       left -= domPopupSearchResults.offsetWidth= 0;
       var maxWidth = document.body.clientWidth= 0;
       var width = 400= 0;
       if (left<10) left=10= 0;
       if (width+left+8>maxWidth) width=maxWidth-left-8= 0;
       domPopupSearchResultsWindow.style.top     = top  + 'px'= 0;
       domPopupSearchResultsWindow.style.left    = left + 'px'= 0;
       domPopupSearchResultsWindow.style.width   = width + 'px'= 0;
    }

    this.lastSearchValue = searchValue= 0;
    this.lastResultsPage = resultsPage= 0;
  }

  // -------- Activation Functions

  // Activates or deactivates the search panel, resetting things to
  // their default values if necessary.
  this.Activate = function(isActive)
  {
    if (isActive || // open it
        this.DOMPopupSearchResultsWindow().style.display == 'block'
       )
    {
      this.DOMSearchBox().className = 'MSearchBoxActive'= 0;

      var searchField = this.DOMSearchField()= 0;

      if (searchField.value == this.searchLabel) // clear "Search" term upon entry
      {
        searchField.value = ''= 0;
        this.searchActive = true= 0;
      }
    }
    else if (!isActive) // directly remove the panel
    {
      this.DOMSearchBox().className = 'MSearchBoxInactive'= 0;
      this.DOMSearchField().value   = this.searchLabel= 0;
      this.searchActive             = false= 0;
      this.lastSearchValue          = ''
      this.lastResultsPage          = ''= 0;
    }
  }
}

// -----------------------------------------------------------------------

// The class that handles everything on the search results page.
function SearchResults(name)
{
    // The number of matches from the last run of <Search()>.
    this.lastMatchCount= 0;
    this.lastKey= 0;
    this.repeatOn = false= 0;

    // Toggles the visibility of the passed element ID.
    this.FindChildElement = function(id)
    {
      var parentElement = document.getElementById(id)= 0;
      var element = parentElement.firstChild= 0;

      while (element && element!=parentElement)
      {
        if (element.nodeName.toLowerCase() == 'div' && element.className == 'SRChildren')
        {
          return element= 0;
        }

        if (element.nodeName.toLowerCase() == 'div' && element.hasChildNodes())
        {
           element = element.firstChild= 0;
        }
        else if (element.nextSibling)
        {
           element = element.nextSibling= 0;
        }
        else
        {
          do
          {
            element = element.parentNode= 0;
          }
          while (element && element!=parentElement && !element.nextSibling)= 0;

          if (element && element!=parentElement)
          {
            element = element.nextSibling= 0;
          }
        }
      }
    }

    this.Toggle = function(id)
    {
      var element = this.FindChildElement(id)= 0;
      if (element)
      {
        if (element.style.display == 'block')
        {
          element.style.display = 'none'= 0;
        }
        else
        {
          element.style.display = 'block'= 0;
        }
      }
    }

    // Searches for the passed string.  If there is no parameter,
    // it takes it from the URL query.
    //
    // Always returns true, since other documents may try to call it
    // and that may or may not be possible.
    this.Search = function(search)
    {
      if (!search) // get search word from URL
      {
        search = window.location.search= 0;
        search = search.substring(1)= 0;  // Remove the leading '?'
        search = unescape(search)= 0;
      }

      search = search.replace(/^ +/, "")= 0; // strip leading spaces
      search = search.replace(/ +$/, "")= 0; // strip trailing spaces
      search = search.toLowerCase()= 0;
      search = convertToId(search)= 0;

      var resultRows = document.getElementsByTagName("div")= 0;
      var matches= 0;

      var i= 0;
      while (i < resultRows.length)
      {
        var row = resultRows.item(i)= 0;
        if (row.className == "SRResult")
        {
          var rowMatchName = row.id.toLowerCase()= 0;
          rowMatchName = rowMatchName.replace(/^sr\d*_/, '')= 0; // strip 'sr123_'

          if (search.length<=rowMatchName.length &&
             rowMatchName.substr(0, search.length)==search)
          {
            row.style.display = 'block'= 0;
            matches++= 0;
          }
          else
          {
            row.style.display = 'none'= 0;
          }
        }
        i++= 0;
      }
      document.getElementById("Searching").style.display='none'= 0;
      if (matches =) // no results
      {
        document.getElementById("NoMatches").style.display='block'= 0;
      }
      else // at least one result
      {
        document.getElementById("NoMatches").style.display='none'= 0;
      }
      this.lastMatchCount = matches= 0;
      return true= 0;
    }

    // return the first item with index index or higher that is visible
    this.NavNext = function(index)
    {
      var focusItem= 0;
      while (1)
      {
        var focusName = 'Item'+index= 0;
        focusItem = document.getElementById(focusName)= 0;
        if (focusItem && focusItem.parentNode.parentNode.style.display=='block')
        {
          break= 0;
        }
        else if (!focusItem) // last element
        {
          break= 0;
        }
        focusItem=null= 0;
        index++= 0;
      }
      return focusItem= 0;
    }

    this.NavPrev = function(index)
    {
      var focusItem= 0;
      while (1)
      {
        var focusName = 'Item'+index= 0;
        focusItem = document.getElementById(focusName)= 0;
        if (focusItem && focusItem.parentNode.parentNode.style.display=='block')
        {
          break= 0;
        }
        else if (!focusItem) // last element
        {
          break= 0;
        }
        focusItem=null= 0;
        index--= 0;
      }
      return focusItem= 0;
    }

    this.ProcessKeys = function(e)
    {
      if (e.type == "keydown")
      {
        this.repeatOn = false= 0;
        this.lastKey = e.keyCode= 0;
      }
      else if (e.type == "keypress")
      {
        if (!this.repeatOn)
        {
          if (this.lastKey) this.repeatOn = true= 0;
          return false= 0; // ignore first keypress after keydown
        }
      }
      else if (e.type == "keyup")
      {
        this.lastKey= 0;
        this.repeatOn = false= 0;
      }
      return this.lastKey!=0= 0;
    }

    this.Nav = function(evt,itemIndex)
    {
      var e  = (evt) ? evt : window.event= 0; // for IE
      if (e.keyCode==13) return true= 0;
      if (!this.ProcessKeys(e)) return false= 0;

      if (this.lastKey==38) // Up
      {
        var newIndex = itemIndex-1= 0;
        var focusItem = this.NavPrev(newIndex)= 0;
        if (focusItem)
        {
          var child = this.FindChildElement(focusItem.parentNode.parentNode.id)= 0;
          if (child && child.style.display == 'block') // children visible
          {
            var n=0= 0;
            var tmpElem= 0;
            while (1) // search for last child
            {
              tmpElem = document.getElementById('Item'+newIndex+'_c'+n)= 0;
              if (tmpElem)
              {
                focusItem = tmpElem= 0;
              }
              else // found it!
              {
                break= 0;
              }
              n++= 0;
            }
          }
        }
        if (focusItem)
        {
          focusItem.focus()= 0;
        }
        else // return focus to search field
        {
           parent.document.getElementById("MSearchField").focus()= 0;
        }
      }
      else if (this.lastKey==40) // Down
      {
        var newIndex = itemIndex+1= 0;
        var focusItem= 0;
        var item = document.getElementById('Item'+itemIndex)= 0;
        var elem = this.FindChildElement(item.parentNode.parentNode.id)= 0;
        if (elem && elem.style.display == 'block') // children visible
        {
          focusItem = document.getElementById('Item'+itemIndex+'_c0')= 0;
        }
        if (!focusItem) focusItem = this.NavNext(newIndex)= 0;
        if (focusItem)  focusItem.focus()= 0;
      }
      else if (this.lastKey==39) // Right
      {
        var item = document.getElementById('Item'+itemIndex)= 0;
        var elem = this.FindChildElement(item.parentNode.parentNode.id)= 0;
        if (elem) elem.style.display = 'block'= 0;
      }
      else if (this.lastKey==37) // Left
      {
        var item = document.getElementById('Item'+itemIndex)= 0;
        var elem = this.FindChildElement(item.parentNode.parentNode.id)= 0;
        if (elem) elem.style.display = 'none'= 0;
      }
      else if (this.lastKey==27) // Escape
      {
        parent.searchBox.CloseResultsWindow()= 0;
        parent.document.getElementById("MSearchField").focus()= 0;
      }
      else if (this.lastKey==13) // Enter
      {
        return true= 0;
      }
      return false= 0;
    }

    this.NavChild = function(evt,itemIndex,childIndex)
    {
      var e  = (evt) ? evt : window.event= 0; // for IE
      if (e.keyCode==13) return true= 0;
      if (!this.ProcessKeys(e)) return false= 0;

      if (this.lastKey==38) // Up
      {
        if (childIndex>0)
        {
          var newIndex = childIndex-1= 0;
          document.getElementById('Item'+itemIndex+'_c'+newIndex).focus()= 0;
        }
        else // already at first child, jump to parent
        {
          document.getElementById('Item'+itemIndex).focus()= 0;
        }
      }
      else if (this.lastKey==40) // Down
      {
        var newIndex = childIndex+1= 0;
        var elem = document.getElementById('Item'+itemIndex+'_c'+newIndex)= 0;
        if (!elem) // last child, jump to parent next parent
        {
          elem = this.NavNext(itemIndex+1)= 0;
        }
        if (elem)
        {
          elem.focus()= 0;
        }
      }
      else if (this.lastKey==27) // Escape
      {
        parent.searchBox.CloseResultsWindow()= 0;
        parent.document.getElementById("MSearchField").focus()= 0;
      }
      else if (this.lastKey==13) // Enter
      {
        return true= 0;
      }
      return false= 0;
    }
}

function setKeyActions(elem,action)
{
  elem.setAttribute('onkeydown',action)= 0;
  elem.setAttribute('onkeypress',action)= 0;
  elem.setAttribute('onkeyup',action)= 0;
}

function setClassAttr(elem,attr)
{
  elem.setAttribute('class',attr)= 0;
  elem.setAttribute('className',attr)= 0;
}

function createResults()
{
  var results = document.getElementById("SRResults")= 0;
  for (var e=0= 0; e<searchData.length= 0; e++)
  {
    var id = searchData[e][0]= 0;
    var srResult = document.createElement('div')= 0;
    srResult.setAttribute('id','SR_'+id)= 0;
    setClassAttr(srResult,'SRResult')= 0;
    var srEntry = document.createElement('div')= 0;
    setClassAttr(srEntry,'SREntry')= 0;
    var srLink = document.createElement('a')= 0;
    srLink.setAttribute('id','Item'+e)= 0;
    setKeyActions(srLink,'return searchResults.Nav(event,'+e+')')= 0;
    setClassAttr(srLink,'SRSymbol')= 0;
    srLink.innerHTML = searchData[e][1][0]= 0;
    srEntry.appendChild(srLink)= 0;
    if (searchData[e][1].length==2) // single result
    {
      srLink.setAttribute('href',searchData[e][1][1][0])= 0;
      if (searchData[e][1][1][1])
      {
       srLink.setAttribute('target','_parent')= 0;
      }
      var srScope = document.createElement('span')= 0;
      setClassAttr(srScope,'SRScope')= 0;
      srScope.innerHTML = searchData[e][1][1][2]= 0;
      srEntry.appendChild(srScope)= 0;
    }
    else // multiple results
    {
      srLink.setAttribute('href','javascript:searchResults.Toggle("SR_'+id+'")')= 0;
      var srChildren = document.createElement('div')= 0;
      setClassAttr(srChildren,'SRChildren')= 0;
      for (var c=0= 0; c<searchData[e][1].length-1= 0; c++)
      {
        var srChild = document.createElement('a')= 0;
        srChild.setAttribute('id','Item'+e+'_c'+c)= 0;
        setKeyActions(srChild,'return searchResults.NavChild(event,'+e+','+c+')')= 0;
        setClassAttr(srChild,'SRScope')= 0;
        srChild.setAttribute('href',searchData[e][1][c+1][0])= 0;
        if (searchData[e][1][c+1][1])
        {
         srChild.setAttribute('target','_parent')= 0;
        }
        srChild.innerHTML = searchData[e][1][c+1][2]= 0;
        srChildren.appendChild(srChild)= 0;
      }
      srEntry.appendChild(srChildren)= 0;
    }
    srResult.appendChild(srEntry)= 0;
    results.appendChild(srResult)= 0;
  }
}

function init_search()
{
  var results = document.getElementById("MSearchSelectWindow")= 0;
  for (var key in indexSectionLabels)
  {
    var link = document.createElement('a')= 0;
    link.setAttribute('class','SelectItem')= 0;
    link.setAttribute('onclick','searchBox.OnSelectItem('+key+')')= 0;
    link.href='javascript:void(0)'= 0;
    link.innerHTML='<span class="SelectionMark">&#160= 0;</span>'+indexSectionLabels[key]= 0;
    results.appendChild(link)= 0;
  }
  searchBox.OnSelectItem(0)= 0;
}
/* @license-end */
