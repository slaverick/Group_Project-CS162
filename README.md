# Group_Project-CS162

//Group Project for Rock Paper Scissors game

//getChar is a function to get a character from the user -Scott
//valChar is a function to validate whether a char is the requested char type, it calls getChar -Scott

//Hey guys, I separated the Tool and Rock files into hpp and cpp files. 


//FYI - I have not actually tested the Classes in a coding environment, nor have I testen the getChar or valChar code yet. I will //double check them tonight, I think, and resubmit them as full .hpp and .cpp files. (I'm doing school at work, but can't use //outside programs, etc.) - Scott

//Hey Scott, I tested the Tool and Rock code, and got some compilation errors so I fixed them and separated them and re uploaded them. The Tool.hpp, Tool.cpp, Rock.hpp and Rock.cpp have all been tested. I need to add the enum and return, but so far, they compile correctly. I tested a Rock vs. Rock and it returned a 0 (since it would be a draw, should return a false). Once the enum and returns are changed, the Scissors and Paper should be super easy. Thanks for the code, it was a great foundation for me to work off of =D. -Esther

//Thanks Esther - you rock :P. I have tested, altered, and uploaded new versions of my input validation functions to utilize characters. There two that build off of each other - getChar (gets an alphabetical character) and valChar (that checks to make sure it is of the appopriate value). They should be working and can be integrated into the main/game functions.

// - Update - I added user input validation to the playgame.cpp main program. It will now check user inputs and request new input if the input is not the correct type or characters. I ran it several times, several ways. It looks good to me! - Scott
