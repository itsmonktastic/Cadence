CADENCE VISUAL STUDIO WALKTHROUGH (only tested with VS2010)

0) Download and install Visual Studio Express for C++
It's free (as in beer). Go do a search for it. Has its own install wizard, shouldn't be a problem.

1) Download the Qt SDK
Go to http://qt.nokia.com/downloads/ and download the Qt libraries for Windows, and make sure you get the ones
built for the MSVC compiler (it should say VS2008 or similar)

2) Open the Cadence Visual Studio solution
If you've installed visual studio, solution files should be associated, so you can just navigate to
Cadence/visualstudio/cadence and open cadence.sln.

3) Define QtDir
The Cadence Build Process relies on the value of a macro - QtDir. You can set this up for your machine by modifying
your user properties sheet. To get to this, go to 'View -> Property Manager' (if you can't see this, you need to go
to 'Tools -> Settings' and enable expert mode). Then just click on one of the projects and you should see a sheet
called 'Microsoft.Cpp.Win32.user'. Double click this, then modify the 'User Macros' setting so that QtDir has a value
like 'C:\Qt\4.7.1\' (without the quotes, and the trailing backslash is important there)

4) Build The Cadence Loader Project
In theory from here you should just be able to click the play button to start building and run.