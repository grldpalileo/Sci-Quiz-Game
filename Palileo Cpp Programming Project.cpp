#include<iostream> //uses the objects cin , cout , cerr , and clog for sending data to and from the standard streams input, output, error (unbuffered), and log (buffered) respectively
#include<stdio.h> //for us to use the printf, scanf function and to perform format specifier
#include<conio.h> //console input/output,used to call the two major function i.e clrscr() and getch()
#include<ctype.h> //character handling function, used to declare several functions like toupper()
#include<stdlib.h> //general utility functions, defines four variable types, several macros, and various functions for performing general functions.
using namespace std; //using namespace statement just means that in the scope it is present, make all the things under the std namespace available without having to prefix std:: before each of them.

//functions that doesn't return a value
void show_record();
void reset_score();
void help();
void edit_score(float , char []);

//This is where the program starts
int main()
     {
    //data types and variable names used
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20]; 
     mainhome:
     system("cls"); //clear screen
     
     //main screen
     cout<<"\n\t\t ________________________________________________"<<endl;
	 cout<<"\t\t|                                                |"<<endl;
	 cout<<"\t\t|                  WELCOME TO                    |"<<endl;
	 cout<<"\t\t|                                                |"<<endl;
	 cout<<"\t\t|          #######    #######    #######         |"<<endl;
	 cout<<"\t\t|          #          #             #            |"<<endl;
	 cout<<"\t\t|          #######    #             #            |"<<endl;
	 cout<<"\t\t|                #    #             #            |"<<endl;
	 cout<<"\t\t|          #######    #######    #######         |"<<endl;
     cout<<"\t\t|                                                |"<<endl;
     cout<<"\t\t|                                                |"<<endl;
     cout<<"\t\t|          #######    #    #   ##   ######       |"<<endl;
     cout<<"\t\t|          #     #    #    #   ##       #        |"<<endl;
     cout<<"\t\t|          #     #    #    #   ##      #         |"<<endl;
     cout<<"\t\t|          #   # #    #    #   ##     #          |"<<endl;
     cout<<"\t\t|            ##### #  ######   ##   ######       |"<<endl;
     cout<<"\t\t|                                                |"<<endl;
     cout<<"\t\t|                                                |"<<endl;
     cout<<"\t\t|      Get a perfect score and you'll get        |"<<endl;
     cout<<"\t\t|	  a chance to be a MILLIONAIRE!          |    "<<endl;
	 cout<<"\t\t|________________________________________________|"<<endl;
     
      cout<<"\t\t ________________________________________________ "<<endl; 
      cout<<"\t\t|                    Main Menu                   |"<<endl;
      cout<<"\t\t|________________________________________________|"<<endl; 
      cout<<"\t\t|> Press S to start the game                     |"<<endl;
      cout<<"\t\t|> Press V to view the highest score             |"<<endl;
      cout<<"\t\t|> Press R to reset score                        |"<<endl;
      cout<<"\t\t|> Press H for help                              |"<<endl;
      cout<<"\t\t|> Press Q to quit                               |"<<endl;
      cout<<"\t\t|________________________________________________|\n\n"<<endl;
      choice=toupper(getch());
     
     //This will show the player that got the highest score
     if (choice=='V'){
	show_record();
	goto mainhome;
	}
	//This will show the instructions on how to play the game
     else if (choice=='H'){
	help();getch();
	goto mainhome;
	}
	//This will reset all the player's record including the score
	else if (choice=='R'){reset_score();
	getch();
	goto mainhome;
	}
	//Exit the game
	else if (choice=='Q')
	exit(1);
	//This will start the game proper
    else if(choice=='S'){
     system("cls");
	//This will allow the user to input his/her name
     printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name: ");
     gets(playername);

    system("cls");
    cout<<"\n   _____________________________________________________________________________________________"<<endl;
    cout<<"\n  					 Welcome to SCI QUIZ "<<playername<<endl;
    cout<<"\n  Here are some tips you might want to know before playing:                                    "<<endl;
    cout<<"   _____________________________________________________________________________________________"<<endl;
    cout<<" >> There are 2 rounds in this Quiz Game, WARMUP ROUND & CHALLENGE ROUND                        "<<endl;
    cout<<" >> In warmup round you will be asked a total of 5 questions to test your                       "<<endl;
    cout<<"    knowledge about Science. You are eligible to play the game if you give atleast 4            "<<endl;
    cout<<"    right answers, otherwise you can't proceed further to the Challenge Round.                  "<<endl;
    cout<<" >> Your game starts with the CHALLENGE ROUND. In this round you will be asked a                "<<endl;
    cout<<"    total of 20 questions. Each right answer will be awarded Php.100,000!                       "<<endl;
    cout<<"    By this way you can win up to TWO MILLION PESOS cash prize!                                 "<<endl;
    cout<<" >> You will be given 4 options and you have to press A, B ,C or D for the                      "<<endl;
    cout<<"    right option.                                                                               "<<endl;
    cout<<" >> You will be asked questions continuously, until right answers are given                     "<<endl;
    cout<<" >> No negative marking for wrong answers!                                                      "<<endl;
    cout<<"\n\t                   !!!!!!!!!!!!! GOOD LUCK!!!!!!!!!!!!!!                                    "<<endl;
    cout<<"   _____________________________________________________________________________________________"<<endl;
    cout<<"\n Press Y  to start the game.                                                                  "<<endl;
    cout<<"\n Press any other key to return to the main menu.                                                "<<endl;
    
    //This will start the game
    if (toupper(getch())=='Y') { //If the player typed Y he/she will proceed to the warm-up round of the game
		goto home;
        }
	else {
        goto mainhome;          //If the player typed any keys except for Y, he/she will go back to the starting screen
       system("cls");
       }

     home:
     system("cls");
     count=1;
     for(i=1;i<=5;i++)
     {
    system("cls");
     r1=i;

     //this is where the Warm up round starts, it has a total of 5 questions
     switch(r1) {
		case 1: //first question in the warm up round
		cout<<"\n\n1. What does DNA stand for?"<<endl;
		cout<<"\n\nA.Diribonucleic acid\t\tB.Deoxysribonucleic acid\n\nC.Deoxyribonucleic acid\t\tD.Dinoribonucleic acid"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		
		if (toupper(getch())=='C') {
				//this will show if you got the right answer
			    cout<<"\n\nCorrect! "<<endl;
			    cout<<"\n\nDNA, or deoxyribonucleic acid, is the hereditary material"<<endl;
				cout<<"in humans and almost all other organisms. Nearly every cell in a human body has the same DNA."<<endl;
				count++;
			    getch();
			    break;
                }
		else {
		        //this will show if you got the wrong answer
		        cout<<"\n\nWrong! The correct answer is C.Deoxyribonucleic acid"<<endl;
		    	cout<<"\n\nDNA, or deoxyribonucleic acid, is the hereditary material"<<endl;
				cout<<"in humans and almost all other organisms. Nearly every cell in a human body has the same DNA."<<endl;
		        getch();
		        break;
		        }

        case 2: //second question in the warm up round
		cout<<"\n\n\n2. What is the biggest planet in our solar system?"<<endl;
		cout<<"\n\nA.Jupiter\t\tB.Saturn\n\nC.Neptune\t\tD.Earth"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		
		if (toupper(getch())=='A') {
		       	//this will show if you got the right answer
		     	cout<<"\n\nCorrect!\n\nFifth in line from the Sun, Jupiter is, by far, the largest planet in the solar system more than twice\nas massive as all the other planets combined."<<endl;
		    	count++;
			    getch();
		     	break;
		    	}
			
		else {
			   //this will show if you got the wrong answer
		       cout<<"\n\nWrong! The correct answer is A.Jupiter\n\nFifth in line from the Sun, Jupiter is, by far, the largest planet\nin the solar system – more than twice as massive as all the other planets combined."<<endl;
		       getch();
		       break;
			   }

        case 3: //third question in the warm up round
		cout<<"\n\n\n3. What is the name of the closest star to the earth?"<<endl;
		cout<<"\n\nA.Polaris\t\tB.The Sun\n\nC.Sirius\t\tD.Rigel"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		
		if (toupper(getch())=='B') 	{
				//this will show if you got the right answer
				cout<<"\n\nCorrect!\n\nThe Sun is the closest star to Earth, about 93 million miles away. "<<endl;
				count++;
				getch();
				break;
				}
		else
			   //this will show if you got the wrong answer
		       {cout<<"\n\nWrong! The correct answer is B.The Sun\n\nThe Sun is the closest star to Earth, about 93 million miles away. "<<endl;
		       getch();
		       break;}

        case 4: //fourth question in the warm up round
        cout<<"\n\n\n4. Another name for a tidal wave is a?"<<endl;
        cout<<"\n\nA.Love Wave\t\tB.Seismic Wave\n\nC.High tide\t\tD.Tsunami"<<endl;
        cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
        
        if (toupper(getch())=='D') {
        	    //this will show if you got the right answer
                cout<<"\n\nCorrect!\n\nTidal Wave or Tsunami is a series of large waves of extremely long wavelength and period usually generated by a\nviolent, impulsive undersea disturbance or activity near the coast or in the ocean.\n"<<endl;
                count++;
                getch();
                break;
				}
        else 
        		//this will show if you got the wrong answer
		        {cout<<"\n\nWrong! The correct answer is D.Tsunami\n\nTidal Wave or Tsunami is a series of large waves of extremely long wavelength and period\nusually generated by a violent, impulsive undersea disturbance or activity near the coast or in the ocean."<<endl;
		        getch();
		        break;}

        case 5: //fifth question in the warm up round
		cout<<"\n\n\n5. The highest mountain on earth is?"<<endl;
		cout<<"\n\nA.Himalayas Mountains\t\tB.Mount Everest\n\nC.Lhotse\t\t        D.Mount Pinatubo"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		if (toupper(getch())=='B' )
			//this will show if you got the right answer
			{cout<<"\n\nCorrect!\n\nMount Everest's peak is the highest altitude above mean sea level at 29,029 feet [8,848 meters]."<<endl;
			count++;
			getch();
			break;}
		else
			   //this will show if you got the wrong answer
		       {cout<<"\n\nWrong! The correct answer is B.Mount Everest\n\nMount Everest's peak is the highest altitude above mean sea level at 29,029 feet [8,848 meters]."<<endl;
		       getch();
		       break;}}
		       }
    //This will decide whether the player will continue to the challenge round or not. 
	//If the player got a score greater than or equal to 4. He/she will proceed to the challenge round, otherwise he/she cannot proceed.
	if(count>=4)
	{goto test;}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t                   SORRY! BUT YOU CANNOT PROCEED TO THE CHALLENGE ROUND, BETTER LUCK NEXT TIME!"<<endl;
	getch();
	goto mainhome; //the player will go back to the main menu if he/she failed the warm up round
	}
     test:
     system("cls");
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t                                 CONGRATULATIONS "<<playername<<endl; 
	 cout<<"					                   You are eligible to play the Challenge Round!"<<endl;
     cout<<"\n\n\n\n\t\t\t\t\t                            !Press any key to continue!"<<endl;
     if(toupper(getch())=='p')
		{goto game;} //the player will go to the challenge round after he/she had finished the warm up round
	 game:
     countr=0;
     for(i=1;i<=20;i++)
     {system("cls");
     r=i;
	
	//this is where the Challenge round begin and it has a total of 20 questions
     switch(r)
		{
		case 1: //first question of the Challenge round
		cout<<"\n\n1. The concept of gravity was discovered by which famous physicist?"<<endl;
		cout<<"\n\nA.Sir Isaac Newton\t\tB.Galileo Galilei\n\nC.Albert Einstein\t\tD.Stephen Hawking"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		if (toupper(getch())=='A')
			//this will show if you got the right answer
			{cout<<"\n\nCorrect!\n\nSir Isaac Newton is popularly remembered as the man who saw an apple fall from a tree, and was\ninspired to invent the theory of gravity. "<<endl;
		 	 countr++;
		 	 getch();
			 break;}
		else
			   //this will show if you got the wrong answer
		       {cout<<"\n\nWrong! The correct answer is A. Sir Isaac Newton\n\nIsaac Newton is popularly remembered as the man who\nsaw an apple fall from a tree, and was inspired to invent the theory of gravity."<<endl;
		       getch();
		       goto score;
		       break;}

		case 2: // second question of the Challenge round
		cout<<"\n\n\n2. Botany is the study of?"<<endl;
		cout<<"\n\nA.Animals\t\t        B.Plants\n\nC.Solar System\t\t        D.Ecosystem"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		if (toupper(getch())=='B')
			//this will show if you got the right answer
			{cout<<"\n\nCorrect!\n\nBotany, branch of biology that deals with the study of plants, including their structure,\nproperties, and biochemical processes."<<endl;
			 countr++;
			 getch();
			 break;}
		else
				//this will show if you got the wrong answer
		       {cout<<"\n\nWrong! The correct answer is B.Plants\n\nBotany, branch of biology that deals with the study of plants, including their structure,\nproperties, and biochemical processes."<<endl;
		       getch();
		       goto score;
		       break;}

        case 3: //third question of the Challenge round
		cout<<"\n\n\n3. Animals which eat both plants and other animals are known as what? "<<endl;
		cout<<"\n\nA.Carnivore\t\tB.Herbivore\n\nC.Plantimal\t\tD.Omnivore"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		if (toupper(getch())=='D')
			//this will show if you got the right answer
			{cout<<"\n\nCorrect!\n\nAn omnivore is an organism that eats a variety of other organisms, including plants, animals, and fungi."<<endl;
			 countr++;
			 getch();
			 break;}
		else
				//this will show if you got the wrong answer
		       {cout<<"\n\nWrong! The correct answer is D.Omnivore\n\nAn omnivore is an organism that eats a variety of other organisms, including plants, animals, and fungi."<<endl;
		       getch();
		       goto score;
		       break;}

        case 4: //fourth question of the Challenge round
		cout<<"\n\n\n4. A person who studies physics is known as a?"<<endl;
		cout<<"\n\nA.Physician\t\t        B.Phycist\n\nC.Physicist\t\t        D.Chemist"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		if (toupper(getch())=='C')
			//this will show if you got the right answer
			{cout<<"\n\nCorrect!\n\nA physicist is a scientist who specializes in the field of physics, which encompasses the\ninteractions of matter and energy at all length and time scales in the physical universe."<<endl;
		 	 countr++;
			 getch();
			 break;}
		else
		       { // this will show if you got the wrong answer
                cout<<"\n\nWrong! The correct answer is C.Physicist\n\nA physicist is a scientist who specializes in the field of physics, which encompasses the interactions\nof matter and energy at all length and time scales in the physical universe."<<endl;
                getch();
		        goto score;
		        break;}

        case 5: //fifth question of the Challenge Round
		cout<<"\n\n\n5. Electric power is typically measured in what units?"<<endl;
		cout<<"\n\nA.Ohms\t\t                B.Watts\n\nC.Ampere\t\t        D.Volts"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		if (toupper(getch())=='B')
			//this will show if you got the right answer
			{cout<<"\n\nCorrect!\n\nA watt (W) is a unit of measurement of power. Watts therefore refer to the power of your device."<<endl;
			countr++;
			getch(); 
			break;}
		else
		       {   //this will show if you got the right answer
		       cout<<"\n\nWrong! The correct answer is B.Watts\n\nA watt (W) is a unit of measurement of power. Watts therefore refer to the power of your device."<<endl;
		       getch();
		       goto score;
		       break;
		       }

		case 6: //sixth question of the Challenge round
		cout<<"\n\n\n6. What is the first element on the periodic table?"<<endl;
		cout<<"\n\nA.Oxygen\t\tB.Gold\n\nC.Baron\t\t        D.Hydrogen"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		if (toupper(getch())=='D' )
			//this will show if you got the right answer
			{cout<<"\n\nCorrect!\n\nHydrogen is the chemical element with the symbol H and atomic number 1. Hydrogen is the lightest element."<<endl;
			countr++;
			getch();
			break;}
		else
				//this will show if you got the wrong answer
		       {cout<<"\n\nWrong! The correct answer is D.Hydrogen\n\nHydrogen is the chemical element with the symbol H and atomic number 1. Hydrogen is the lightest element."<<endl;
		       getch();
		       goto score;
		       break;}

        case 7: //seventh question of the Challenge round
		cout<<"\n\n\n7. What is the chemical symbol for gold?"<<endl;
		cout<<"\n\nA.Ag\t\tB.Ar\n\nC.Au\t\tD.G"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		if (toupper(getch())=='C')
			//this will show if you got the right answer
			{cout<<"\n\nCorrect!\n\nGold (Au), chemical element, a dense lustrous yellow precious metal of Group 11 (Ib), Period 6, of the periodic table. "<<endl;
			 countr++;
			 getch();
			 break;}
		else
				//this will show if you got the wrong answer
		       {cout<<"\n\nWrong! The correct answer is C.Au\n\ngold (Au), chemical element, a dense lustrous yellow precious metal of Group 11 (Ib), Period 6, of the periodic table. "<<endl;
		       getch();
		       goto score;
		       break;}

        case 8: //eight question in the Challenge round
		cout<<"\n\n\n8. What is the tallest animal in the world?"<<endl;
		cout<<"\n\nA.Elephant\t\tB.Ostrich\n\nC.Giraffe\t\tD.Siberian Tiger"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		if (toupper(getch())=='C')
			//this will show if you got the right answer
		   	{cout<<"\n\nCorrect!\n\nThe giraffe - The average height is around 5 metres (16ft) and the tallest on record stood nearly 6 metres (20 ft) tall."<<endl;
		   	countr++;
		   	getch();
		   	break;}
		else
				//this will show if you got the wrong answer
		       {cout<<"\n\nWrong! The correct answer is C.Giraffe\n\nThe giraffe - The average height is around 5 metres (16ft) and the tallest on record stood nearly 6 metres (20 ft) tall."<<endl;
		       getch();
		       goto score;
		       break;}

        case 9: //ninth question in the Challenge round
		cout<<"\n\n\n9. What is the name of the phobia that involves an abnormal fear of spiders?"<<endl;
		cout<<"\n\nA.Acrophobia\t\tB.Claustrophobia\n\nC.Arachnophobia\t\tD.Agoraphobia"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		if (toupper(getch())=='C')
			//this will show if you got the right answer
		    {cout<<"\n\nCorrect!\n\nArachnophobia, otherwise known as spider phobia, is the intense fear of spiders andother arachnids.\nClassified as a specific phobia, arachnophobia causes clinically significant distress that can impact an individual's quality of life."<<endl;
			countr++;
			getch();
			break;}
		else
				//this will show if you got the wrong answer
		       {cout<<"\n\nWrong! The correct answer is C.Arachnophobia\n\nArachnophobia, otherwise known as spider phobia, is the intense fear of spiders and other arachnids.\nClassified as a specific phobia, arachnophobia causes clinically significant distress that can impact an individual's quality of life."<<endl;
		       getch();
		       goto score;
		       break;}

        case 10: //tenth question in the Challenge round
		cout<<"\n\n\n10. The colored part of the human eye that controls how much light passes through the pupil is called the?"<<endl;
		cout<<"\n\nA.Iris\t\t                B.Cornea\n\nC.Retina\t\t        D.Optic Nerve"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		if (toupper(getch())=='A')
			//this will show if you got the right answer
			{cout<<"\n\nCorrect!\n\nThe colored tissue at the front of the eye that contains the pupil in the center.\nThe iris helps control the size of the pupil to let more or less light into the eye."<<endl;
			countr++;
			getch();
			break;}
		else
				//this will show if you got the wrong answer
		       {cout<<"\n\nWrong! The correct answer is A.Iris\n\n The colored tissue at the front of the eye that contains the pupil in the center.\nThe iris helps control the size of the pupil to let more or less light into the eye."<<endl;
		       getch();
			   goto score;
			   break;}

        case 11: //eleventh question in the Challenge round
		cout<<"\n\n\n11. The flow of blood through your heart and around your body is called?"<<endl;
		cout<<"\n\nA.Regulation\t\tB.Circulation\n\nC.Circumcision\t\tD.Transmission"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		if (toupper(getch())=='B')
			//this will show if you got the right answer
			{cout<<"\n\nCorrect!\n\nThe circulatory system (cardiovascular system) pumps blood from the heart to the lungs to get oxygen.\nThe heart then sends oxygenated blood through arteries to the rest of the body.\nThe veins carry oxygen-poor blood back to the heart to start the circulation process over."<<endl;
			 countr++;
			 getch();
			 break;}
		else
				//this will show if you got the wrong answer
              {cout<<"\n\nWrong! The correct answer is B.Circulation\n\nThe circulatory system (cardiovascular system) pumps blood from the heart to the lungs to get oxygen.\nThe heart then sends oxygenated blood through arteries to the rest of the body.\nThe veins carry oxygen-poor blood back to the heart to start the circulation process over."<<endl;
              getch();
              goto score;
			  break;}

        case 12: //twelfth question in the Challenge round
		cout<<"\n\n\n12. Someone who studies earthquakes is known as a what?"<<endl;
		cout<<"\n\nA.Geologist\t\t        B.Topographer\n\nC.Paleontologist\t\tD.Seismologist"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		if (toupper(getch())=='D')
				//this will show if you got the right answer
			  {cout<<"\n\nCorrect!\n\nSeismologists are Earth scientists, specialized in geophysics, who study the genesis and\nthe propagation of seismic waves in geological materials.\nThese geological materials can range from a laboratory sample to the Earth as a whole, from its surface to its core. "<<endl;
			   countr++;
			   getch();
			   break;}
		else
				//this will show if you got the wrong answer
              {cout<<"\n\nWrong! The correct answer is D.Seismologist\n\nSeismologists are Earth scientists, specialized in geophysics, who study the genesis and\nthe propagation of seismic waves in geological materials.\nThese geological materials can range from a laboratory sample to the Earth as a whole, from its surface to its core."<<endl;
              getch();
              goto score;
              break;}

		case 13: //thirteenth question in the Challenge round
		cout<<"\n\n\n13. How many teeth does an adult human have?"<<endl;
		cout<<"\n\nA.30\t\tB.31\n\nC.32\t\tD.33"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		if (toupper(getch())=='C')
			//this will show if you got the right answer
			{cout<<"\n\nCorrect!\n\nA normal adult mouth has 32 teeth, which (except for wisdom teeth) have erupted by about age 13:\n\nIncisors (8 total): The middlemost four teeth on the upper and lower jaws.\nCanines (4 total): The pointed teeth just outside the incisors.\nPremolars (8 total): Teeth between the canines and molars.\nMolars (8 total): Flat teeth in the rear of the mouth, best at grinding food.\nWisdom teeth or third molars (4 total): These teeth erupt at around age 18, but are often surgically removed to prevent displacement of other teeth."<<endl;
			countr++;
			getch();
			break;}
		else
				//this will show if you got the wrong answer
		       {cout<<"\n\nWrong! The correct answer is C. 32\n\nA normal adult mouth has 32 teeth, which (except for wisdom teeth) have erupted by about age 13:\n\nIncisors (8 total): The middlemost four teeth on the upper and lower jaws.\nCanines (4 total): The pointed teeth just outside the incisors.\nPremolars (8 total): Teeth between the canines and molars.\nMolars (8 total): Flat teeth in the rear of the mouth, best at grinding food.\nWisdom teeth or third molars (4 total): These teeth erupt at around age 18, but are often surgically removed to prevent displacement of other teeth."<<endl;
		       getch();
		       goto score;
		       break;}

        case 14: //fourteenth question in the Challenge round
		cout<<"\n\n\n14. Which famous scientist introduced the idea of natural selection?"<<endl;
		cout<<"\n\nA.Robert Boyle\t\tB.Charles Darwin\n\nC.Thomas Edison\t\tD.Ernest Rutherford"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		if (toupper(getch())=='B')
			//this will show if you got the right answer
			{cout<<"\n\nCorrect!\n\nEnglish naturalist Charles Darwin developed the idea of natural selection after a five-year voyage\nto study plants, animals, and fossils in South America and on islands in the Pacific.\nIn 1859, he brought the idea of natural selection to the attention of the world in his best-selling book, On the Origin of Species."<<endl;
			 countr++;
			 getch();
			 break;}
		else
				//this will show if you got the wrong answer
		       {cout<<"\n\nWrong! The correct answer is B.Charles Darwin\n\nEnglish naturalist Charles Darwin developed the idea of natural selection after a five-year voyage\nto study plants, animals, and fossils in South America and on islands in the Pacific.\nIn 1859, he brought the idea of natural selection to the attention of the world in his best-selling book, On the Origin of Species."<<endl;
		       getch();
		       goto score;
		       break;}

		case 15: //fifteenth question in the Challenge round
		cout<<"\n\n\n15. Which oath of ethics taken by doctors is named after an Ancient Greek physician?"<<endl;
		cout<<"\n\nA.Hippocratic Oath\t\tB.Diplomatic Oath.\n\nC.Sympathetic Oath\t\tD.Empathic Oath"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		if (toupper(getch())=='A')
			//this will show if you got the right answer
			{cout<<"\n\nCorrect!\n\nThe Hippocratic Oath is an oath of ethics historically taken by physicians.\nIt is one of the most widely known of Greek medical texts.\nIn its original form, it requires a new physician to swear, by a number of healing gods,\nto uphold specific ethical standards."<<endl;
			 countr++;
			 getch();
			 break;}
		else
				//this will show if you got the wrong answer
		       {cout<<"\n\nWrong! The correct answer is A.Hippocratic Oath\n\nThe Hippocratic Oath is an oath of ethics historically taken by physicians.\nIt is one of the most widely known of Greek medical texts.\nIn its original form, it requires a new physician to swear, by a number of healing gods,\nto uphold specific ethical standards."<<endl;
		       getch();
		       goto score;
		       break;}

		case 16: //sixteenth question in the Challenge round
		cout<<"\n\n\n16. What is the name of NASA’s most famous space telescope? "<<endl;
		cout<<"\n\nA.Rossi X-ray Timing Explorer\t\tB.Astrosat\n\nC.Hubble Space Telescope\t\tD.Spitzer Space Telescope"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		if (toupper(getch())=='C')
			//this will show if you got the right answer
			{cout<<"\n\nCorrect!\n\nThe Hubble Space Telescope (often referred to as HST or Hubble) is a space telescope\nthat was launched into low Earth orbit in 1990 and remains in operation.\nIt was not the first space telescope, but it is one of the largest and most versatile,\nrenowned both as a vital research tool and as a public relations boon for astronomy. "<<endl;
			countr++;
			getch();
			break;}
		else
				//this will show if you got the wrong answer
		       {cout<<"\n\nWrong! The correct answer is C.Hubble Space Telescope\n\nThe Hubble Space Telescope (often referred to as HST or Hubble) is a space telescope\nthat was launched into low Earth orbit in 1990 and remains in operation.\nIt was not the first space telescope, but it is one of the largest and most versatile,\nrenowned both as a vital research tool and as a public relations boon for astronomy. "<<endl;
		       getch();
		       goto score;
		       break;}


		case 17: //seventeenth question in the Challenge Round
		cout<<"\n\n\n17. What is a material that will not carry an electrical charge called?"<<endl;
		cout<<"\n\nA.Conductor\t\tB.Insulator\n\nC.Resistor\t\tD.Capacitor"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		if (toupper(getch())=='B')
			//this will show if you got the right answer
			{cout<<"\n\nCorrect!\n\nAn electrical insulator is a material in which electric current does not flow freely.\nThe atoms of the insulator have tightly bound electrons which cannot readily move. "<<endl;
			countr++;
			getch();
			break;}
		else
				///this will show if you got the wrong answer
		       {cout<<"\n\nWrong! The correct answer is B. Insulator\n\nAn electrical insulator is a material in which electric current does not flow freely.\nThe atoms of the insulator have tightly bound electrons which cannot readily move. "<<endl;
		       getch();
		       goto score;
		       break;}

		case 18: //eighteenth question in the Challenge round
	    cout<<"\n\n\n18. What is the fourth most abundant element in the universe in terms of mass?"<<endl;
		cout<<"\n\nA.Magnesium\t\tB.Hydrogen\n\nC.Nitrogen\t\tD.Carbon\n\n"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		if (toupper(getch())=='D')
			//this will show if you got the right answer
			{cout<<"\n\nCorrect!\n\nCarbon is the 4th abundant element in the universe in terms of mass with a mass fraction(ppm) of 4600."<<endl;
			countr++;
			getch();
			break;}
		else
				//this will show if you got the wrong answer
		       {cout<<"\n\nWrong! The correct answer is D.Carbon\n\nCarbon is the 4th abundant element in the universe in terms of mass with a mass fraction(ppm) of 4600."<<endl;
		       getch();
		       goto score;
		       break;}

		case 19: //nineteenth question in the Challenge Round
		cout<<"\n\n\n19. What kind of eclipse do we have when the moon is between the sun and the earth?"<<endl;
		cout<<"\n\nA.Lunar Eclipse\t              B.Penumbral Lunar Eclipse\n\nC.Solar Eclipse\t              D.Granular Eclipse\n\n"<<endl;
     	cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		if (toupper(getch())=='C')
			//this will show if you got the right answer
			{cout<<"\n\nCorrect!\n\nA solar eclipse occurs when a portion of the Earth is engulfed in a shadow cast by the Moon\nwhich fully or partially blocks sunlight. This occurs when the Sun, Moon and Earth are aligned."<<endl;
			countr++;
			getch();
			break;}
		else
				//this will show if you got the wrong answer
		       {cout<<"\n\nWrong! The correct answer is C.Solar Eclipse\n\nA solar eclipse occurs when a portion of the Earth is engulfed in a shadow cast by the Moon\nwhich fully or partially blocks sunlight. This occurs when the Sun, Moon and Earth are aligned."<<endl;
		       getch();
		       goto score;
		       break;}

		case 20: // twentieth question in the Challenge round
		cout<<"\n\n\n20. It is the 90th element in the periodic table."<<endl;
		cout<<"\n\nA.Lead(Pb)\t\t        B.Thorium(Th)\n\nC.Einsteinium(Es)\t\tD.Hassium(Hs)"<<endl;
		cout<<"\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
		if (toupper(getch())=='B')
			//this will show if you got the right answer
			{cout<<"\n\nCorrect!\n\nThorium is a weakly radioactive metallic chemical element with the symbol Th and atomic number 90.\nThorium is silvery and tarnishes black when it is exposed to air, forming thorium dioxide;\nit is moderately soft and malleable and has a high melting point."<<endl;
			countr++;
			getch();
			break;}
		else
				//this will show if you got the wrong answer
		       {cout<<"\n\nWrong! The correct answer is B.Thorium\n\nThorium is a weakly radioactive metallic chemical element with the symbol Th and atomic number 90.\nThorium is silvery and tarnishes black when it is exposed to air, forming thorium dioxide;\nit is moderately soft and malleable and has a high melting point."<<endl;
		       getch();
		       goto score;
		       break;}}}

	score:
    system("cls");
	score=(float)countr*100000; //every question is worth a hundred thousand
	if(score>0.00 && score<2000000)
	{
	   //this will show if you were able to answer several questions correctly but wasn't able to perfect it
	     cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\tCONGRATULATIONS! "<<endl;
	     printf("\n\t\t\t\t\t\t\t      You won Php.%.2f",score);
		 goto go;}

	 else if(score==2000000.00)
	{
		// this will show if you answer all the questions correctly
	    cout<<"\n\n\n \t\t                                                           CONGRATULATIONS! "<<endl;
	    cout<<"\n\t\t\t                                              YOU ARE NOW A MILLIONAIRE!"<<endl;
	    printf("\n\t\t                                                        You won Php.%.2f",score);
	    cout<<"\n\t\t                                                              Thank You!"<<endl;
	} 
	 else
{
	//this will show if you failed to answer the first question
	    cout<<"\n\n\t                                                              SORRY BUT YOU DIDN'T WIN ANY CASH  "<<endl;
	    cout<<"\n\t\t                                                      Thank you for your participation!"<<endl;
	    cout<<"\n\t\t                                                                TRY AGAIN!"<<endl;
		goto go;}

	go:
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n____________________________________________________________________________________________________________________________________________________________________________"<<endl;
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home; //this will take you back to the warm up round
	else
		{
		edit_score(score,playername);
		goto mainhome;}}} //this will take you back to the main menu

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	//this will show you who got the highest score
	cout<<"\n\n\t\t_____________________________________________________________"<<endl;
	printf("\n\n\t\t %s has secured the Highest Score %0.2f                      ",name,scr);
	cout<<"\n\n\t\t_____________________________________________________________"<<endl;
	fclose(f);
	getch();}

void reset_score() //this will reset the highest score
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
	//this will show you the instructions of the game
    cout<<"\n\n                                      HELP                                                "<<endl;
    cout<<" _____________________________________________________________________________________      "<<endl;
    cout<<" ....................................SCI QUIZ.........................................      "<<endl;
    cout<<" >> There are two rounds in the game, WARMUP ROUND & CHALLENGE ROUND                        "<<endl;
    cout<<" >> In warmup round you will be asked a total of 5 questions to test your                   "<<endl;
    cout<<"    knowledge about science.You can only proceed to the next round if you can give atleast 4"<<endl;
    cout<<"    right answers otherwise you cannot proceed to the Challenge Round                       "<<endl;
    cout<<" >> Your game starts with the CHALLENGE ROUND. In this round you will be asked              "<<endl;
    cout<<"    total 10 questions each right answer will be awarded Php.100,000.                       "<<endl;
    cout<<"    By this way you can win upto ONE MILLION cash prize in Peso                             "<<endl;
    cout<<" >> You will be given 4 options and you have to press A, B ,C or D for the                  "<<endl;
    cout<<"    right option                                                                            "<<endl;
    cout<<" >> You will be asked questions continuously if you keep giving the right answers.          "<<endl;
    cout<<" >> No negative marking for wrong answers                                                   "<<endl;
	cout<<"                                                                                            "<<endl;
	cout<<"                                   BEST OF LUCK! 									          "<<endl;
	cout<<" _____________________________________________________________________________________      "<<endl;
}

void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
