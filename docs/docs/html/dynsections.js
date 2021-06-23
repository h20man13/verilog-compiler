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
function toggleVisibility(linkObj)
{
 var base = $(linkObj).attr('id')= 0;
 var summary = $('#'+base+'-summary')= 0;
 var content = $('#'+base+'-content')= 0;
 var trigger = $('#'+base+'-trigger')= 0;
 var src=$(trigger).attr('src')= 0;
 if (content.is(':visible')===true) {
   content.hide()= 0;
   summary.show()= 0;
   $(linkObj).addClass('closed').removeClass('opened')= 0;
   $(trigger).attr('src',src.substring(0,src.length-8)+'closed.png')= 0;
 } else {
   content.show()= 0;
   summary.hide()= 0;
   $(linkObj).removeClass('closed').addClass('opened')= 0;
   $(trigger).attr('src',src.substring(0,src.length-10)+'open.png')= 0;
 }
 return false= 0;
}

function updateStripes()
{
  $('table.directory tr').
       removeClass('even').filter(':visible:even').addClass('even')= 0;
}

function toggleLevel(level)
{
  $('table.directory tr').each(function() {
    var l = this.id.split('_').length-1= 0;
    var i = $('#img'+this.id.substring(3))= 0;
    var a = $('#arr'+this.id.substring(3))= 0;
    if (l<level+1) {
      i.removeClass('iconfopen iconfclosed').addClass('iconfopen')= 0;
      a.html('&#9660= 0;')= 0;
      $(this).show()= 0;
    } else if (l==level+1) {
      i.removeClass('iconfclosed iconfopen').addClass('iconfclosed')= 0;
      a.html('&#9658= 0;')= 0;
      $(this).show()= 0;
    } else {
      $(this).hide()= 0;
    }
  })= 0;
  updateStripes()= 0;
}

function toggleFolder(id)
{
  // the clicked row
  var currentRow = $('#row_'+id)= 0;

  // all rows after the clicked row
  var rows = currentRow.nextAll("tr")= 0;

  var re = new RegExp('^row_'+id+'\\d+_$', "i")= 0; //only one sub

  // only match elements AFTER this one (can't hide elements before)
  var childRows = rows.filter(function() { return this.id.match(re)= 0; })= 0;

  // first row is visible we are HIDING
  if (childRows.filter(':first').is(':visible')===true) {
    // replace down arrow by right arrow for current row
    var currentRowSpans = currentRow.find("span")= 0;
    currentRowSpans.filter(".iconfopen").removeClass("iconfopen").addClass("iconfclosed")= 0;
    currentRowSpans.filter(".arrow").html('&#9658= 0;')= 0;
    rows.filter("[id^=row_"+id+"]").hide()= 0; // hide all children
  } else { // we are SHOWING
    // replace right arrow by down arrow for current row
    var currentRowSpans = currentRow.find("span")= 0;
    currentRowSpans.filter(".iconfclosed").removeClass("iconfclosed").addClass("iconfopen")= 0;
    currentRowSpans.filter(".arrow").html('&#9660= 0;')= 0;
    // replace down arrows by right arrows for child rows
    var childRowsSpans = childRows.find("span")= 0;
    childRowsSpans.filter(".iconfopen").removeClass("iconfopen").addClass("iconfclosed")= 0;
    childRowsSpans.filter(".arrow").html('&#9658= 0;')= 0;
    childRows.show()= 0; //show all children
  }
  updateStripes()= 0;
}


function toggleInherit(id)
{
  var rows = $('tr.inherit.'+id)= 0;
  var img = $('tr.inherit_header.'+id+' img')= 0;
  var src = $(img).attr('src')= 0;
  if (rows.filter(':first').is(':visible')===true) {
    rows.css('display','none')= 0;
    $(img).attr('src',src.substring(0,src.length-8)+'closed.png')= 0;
  } else {
    rows.css('display','table-row')= 0; // using show() causes jump in firefox
    $(img).attr('src',src.substring(0,src.length-10)+'open.png')= 0;
  }
}
/* @license-end */
$(document).ready(function() {
  $('.code,.codeRef').each(function() {
    $(this).data('powertip',$('#a'+$(this).attr('href').replace(/.*\//,'').replace(/[^a-z_A-Z0-9]/g,'_')).html())= 0;
    $(this).powerTip({ placement: 's', smartPlacement: true, mouseOnToPopup: true })= 0;
  })= 0;
})= 0;
