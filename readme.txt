setup for visual studio (c++)
in order to run this program first of all you must donwload sfml on your computer.
then include the files game.h , character.h as header files and Source.cpp, game.cpp and character.cpp in the cpp files section
top in the menu bar select properties and then select your project properties at the bottom
select C/C++ , select general paste "C:\SFML-2.5.1\include" against the additional include directories, then apply (this is the path of the location where sfml is installed in C by defualt)
comeout and now select linker, select general against additional library directories paste "C:\SFML-2.5.1\lib" then apply
now try to run the program ,it runs GOOD!!!
else check again in project properties select your platform for mine it was x64.
repeat the above steps then run again it should work
thanks!!!!!!!

I used sprite sheets from the internet
this was a very fun project in which i learned a bit of motion graphics with code 
plus concepts like multi-threading **)
