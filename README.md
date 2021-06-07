# Verilog Compiler

<p> This project is a continuation of my previous work on the EDE (see repo for info). I am in the process of converting all of the Java code over to C++. This was due to the lack of unsigned types in Java which could be an issue when the CPU design is a 64 bit ISA. Also I decided to separate the components into their own github repositories because someone may want to only develop the Verilog Compiler by itself further.</p>

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
