# Verilog Compiler

<p> This project is a continuation of my previous work on the EDE (see repo for info). I am in the process of converting all of the Java code over to C++. This was due to the lack of unsigned types in Java which could be an issue when the CPU design in a 64 bit computer. Also I decided to separate the components into their own github repositories because someone may want to only develop the Verilog Compiler Further.</p>

# Directory Structure

<p> The directory structure of the project is shown below: </p>

<ol>  
 <li> <b>Test: </b>  all of the test folders lie inside this folder</li>
 <li> <b>Include: </b>  all of the header files lie in this folder </li>
 <li> <b>Src: </b> all of the cpp and c files lie in this folder</li>
 <li> <b>Bin: </b> all of the executables get put into this folder after compilation</li>
 <li> <b>Bin/Test: </b> all of the test executables go into this subfolder</li>
</ol>

# Build and Dependency Info

<p> This project uses CMAKE with a default build tool GNU Make. The default compiler I used was Clang however you are free to use which ever one that suits your needs. The commands CMAKE generates are the defaults however to run unit tests I would recommend using <b> make check </b> instead of make test or ctest</p>

&period;&NewLine;&boxvr;&boxh;&boxh;&#x20;&#x62;&#x69;&#x6e;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x43;&#x4d;&#x61;&#x6b;&#x65;&#x4c;&#x69;&#x73;&#x74;&#x73;&period;&#x74;&#x78;&#x74;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxur;&boxh;&boxh;&#x20;&#x74;&#x65;&#x73;&#x74;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&#x20;&#x20;&#x20;&#x20;&boxur;&boxh;&boxh;&#x20;&#x43;&#x4d;&#x61;&#x6b;&#x65;&#x4c;&#x69;&#x73;&#x74;&#x73;&period;&#x74;&#x78;&#x74;&NewLine;&boxvr;&boxh;&boxh;&#x20;&#x43;&#x4d;&#x61;&#x6b;&#x65;&#x4c;&#x69;&#x73;&#x74;&#x73;&period;&#x74;&#x78;&#x74;&NewLine;&boxvr;&boxh;&boxh;&#x20;&#x69;&#x6e;&#x63;&#x6c;&#x75;&#x64;&#x65;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x63;&#x6f;&#x6d;&#x6d;&#x6f;&#x6e;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x43;&#x6f;&#x6c;&#x6f;&#x72;&#x73;&period;&#x68;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x44;&#x65;&#x73;&#x74;&#x69;&#x6e;&#x61;&#x74;&#x69;&#x6f;&#x6e;&period;&#x68;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x45;&#x72;&#x72;&#x6f;&#x72;&period;&#x68;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x45;&#x72;&#x72;&#x6f;&#x72;&#x4c;&#x6f;&#x67;&period;&#x68;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x50;&#x6f;&#x73;&#x69;&#x74;&#x69;&#x6f;&#x6e;&period;&#x68;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxur;&boxh;&boxh;&#x20;&#x53;&#x6f;&#x75;&#x72;&#x63;&#x65;&period;&#x68;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x6d;&#x61;&#x69;&#x6e;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxur;&boxh;&boxh;&#x20;&#x4c;&#x65;&#x78;&#x65;&#x72;&period;&#x68;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x74;&#x65;&#x73;&#x74;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxur;&boxh;&boxh;&#x20;&#x54;&#x65;&#x73;&#x74;&#x55;&#x74;&#x69;&#x6c;&#x73;&period;&#x68;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxur;&boxh;&boxh;&#x20;&#x54;&#x6f;&#x6b;&#x65;&#x6e;&period;&#x68;&NewLine;&boxvr;&boxh;&boxh;&#x20;&#x6c;&#x69;&#x62;&NewLine;&boxvr;&boxh;&boxh;&#x20;&#x52;&#x45;&#x41;&#x44;&#x4d;&#x45;&period;&#x6d;&#x64;&NewLine;&boxvr;&boxh;&boxh;&#x20;&#x73;&#x72;&#x63;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x63;&#x6f;&#x6d;&#x6d;&#x6f;&#x6e;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x43;&#x4d;&#x61;&#x6b;&#x65;&#x46;&#x69;&#x6c;&#x65;&#x73;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x43;&#x6f;&#x6c;&#x6f;&#x72;&#x73;&period;&#x63;&#x70;&#x70;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x44;&#x65;&#x73;&#x74;&#x69;&#x6e;&#x61;&#x74;&#x69;&#x6f;&#x6e;&period;&#x63;&#x70;&#x70;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x45;&#x72;&#x72;&#x6f;&#x72;&period;&#x63;&#x70;&#x70;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x45;&#x72;&#x72;&#x6f;&#x72;&#x4c;&#x6f;&#x67;&period;&#x63;&#x70;&#x70;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x50;&#x6f;&#x73;&#x69;&#x74;&#x69;&#x6f;&#x6e;&period;&#x63;&#x70;&#x70;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxur;&boxh;&boxh;&#x20;&#x53;&#x6f;&#x75;&#x72;&#x63;&#x65;&period;&#x63;&#x70;&#x70;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x6d;&#x61;&#x69;&#x6e;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxur;&boxh;&boxh;&#x20;&#x4c;&#x65;&#x78;&#x65;&#x72;&period;&#x63;&#x70;&#x70;&NewLine;&boxv;&nbsp;&nbsp;&#x20;&boxur;&boxh;&boxh;&#x20;&#x54;&#x6f;&#x6b;&#x65;&#x6e;&period;&#x63;&#x70;&#x70;&NewLine;&boxur;&boxh;&boxh;&#x20;&#x74;&#x65;&#x73;&#x74;&NewLine;&#x20;&#x20;&#x20;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x63;&#x6f;&#x6d;&#x6d;&#x6f;&#x6e;&NewLine;&#x20;&#x20;&#x20;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x44;&#x65;&#x73;&#x74;&#x69;&#x6e;&#x61;&#x74;&#x69;&#x6f;&#x6e;&#x54;&#x65;&#x73;&#x74;&period;&#x63;&#x70;&#x70;&NewLine;&#x20;&#x20;&#x20;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x45;&#x72;&#x72;&#x6f;&#x72;&#x4c;&#x6f;&#x67;&#x54;&#x65;&#x73;&#x74;&period;&#x63;&#x70;&#x70;&NewLine;&#x20;&#x20;&#x20;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x45;&#x72;&#x72;&#x6f;&#x72;&#x54;&#x65;&#x73;&#x74;&period;&#x63;&#x70;&#x70;&NewLine;&#x20;&#x20;&#x20;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x50;&#x6f;&#x73;&#x69;&#x74;&#x69;&#x6f;&#x6e;&#x54;&#x65;&#x73;&#x74;&period;&#x63;&#x70;&#x70;&NewLine;&#x20;&#x20;&#x20;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxur;&boxh;&boxh;&#x20;&#x53;&#x6f;&#x75;&#x72;&#x63;&#x65;&#x54;&#x65;&#x73;&#x74;&period;&#x63;&#x70;&#x70;&NewLine;&#x20;&#x20;&#x20;&#x20;&boxvr;&boxh;&boxh;&#x20;&#x6d;&#x61;&#x69;&#x6e;&NewLine;&#x20;&#x20;&#x20;&#x20;&boxv;&nbsp;&nbsp;&#x20;&boxur;&boxh;&boxh;&#x20;&#x4c;&#x65;&#x78;&#x65;&#x72;&#x54;&#x65;&#x73;&#x74;&period;&#x63;&#x70;&#x70;&NewLine;&#x20;&#x20;&#x20;&#x20;&boxur;&boxh;&boxh;&#x20;&#x54;&#x6f;&#x6b;&#x65;&#x6e;&#x54;&#x65;&#x73;&#x74;&period;&#x63;&#x70;&#x70;&NewLine;&NewLine;

  
# Testing Format

<p> There is a framework I created to make testing easier. Each test file must contain a main function to execute the tests. To add multiple tests to a single file you need to fulfill the requirements below them like below</p>

<ul>
  <li> Boolean Functions: Tests need to be formatted so that they return a true or a false based on if they pass or fail respectively </li>
  <li> Run Test Method:  To be called at run time test names must passed into the run_test method in the main method of the file. The run_test method can be found in the include/test/TestUtils.h header file </li>
  <li>As an extra note the run_test method is designed to stop calling itself when one of your tests fails. If you don't see all of your test results make sure none of them are failing inside the given file</li>
</ul>

# Naming Standards

<ol>  
 <li> <b>CamelCase: </b> files and class names </li>
 <li> <b>under_scores: </b>  All method and function  and variable names </li>
 <li> <b>Note: </b> try to keep variable names as one word if possible semantically</li>
</ol>
