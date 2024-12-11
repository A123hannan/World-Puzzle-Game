#include<iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>
using namespace std;
//------------------------------------------<<<function prototypes>>>------------------------------------------//
void mainmenu();
void Startgame();
void resumegame();
void Gametechniques();
void Exit();
void exit();
int Easy();
int Intermediate();
int Hard();
int Veryhard();
//---------------<<<MAIN FUNCTION>>>----------------//
int main(){ 
system("color 70");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"                                                                        -----------------------------                                "<<endl;
cout<<"                                                                   >>>  |      Word Puzzle Game     |  <<<                           "<<endl;
cout<<"                                                                        -----------------------------                                "<<endl;
cout<<"                                                                          Press any key to continue                                   "<<endl;
getch();
system("cls");
mainmenu();

}
//------------------------------------------<<<Main menu function>>>------------------------------------------//
 void mainmenu(){
 	
	system("color 37");
 	cout<<"                                                  ------------------------------------------------------------------"<<endl;
 	cout<<"                                                  |                         Main Menu                              |"<<endl;
 	cout<<"                                                  ------------------------------------------------------------------"<<endl;
 	cout<<"                                                  |                       1.Start Game                             |"<<endl;
 	cout<<"                                                  |                       3.Game Techniques                        |"<<endl;
 	cout<<"                                                  |                       4.Exit                                   |"<<endl;
 	cout<<"                                                  ------------------------------------------------------------------"<<endl;
 	cout<<"                                                                   ------------------------------                   "<<endl;
cout<<"                                                                   |      Choose an option      |                   "<<endl;
cout<<"                                                                   |  1,2,3 OR 4 & press enter  |                   "<<endl;
cout<<"                                                                   ------------------------------                   "<<endl;
char a;
cin>>a;
system("cls");
switch(a){
	case '1':
		Startgame();
		break;
	case '2':
		resumegame();
		break;
	case '3':
		Gametechniques();
		break;
	case '4':
		Exit();
		break;
	default:
		system("cls");
		mainmenu();
}
 	
 }
//------------------------------------------<<<StartGame function>>>------------------------------------------//
   int g1,g2,g3,g4;
 void Startgame(){
 	int count=0;
	system("color 72");
 	cout<<"                                                  ------------------------------------------------------------------"<<endl;
 	cout<<"                                                  |           Choose your preferred challenge level:               |"<<endl;
 	cout<<"                                                  ------------------------------------------------------------------"<<endl;
 	cout<<"                                                  |                       1.Easy                                   |"<<endl;
 	cout<<"                                                  |                       2.Intermediate                           |"<<endl;
 	cout<<"                                                  |                       3.Hard                                   |"<<endl;
 	cout<<"                                                  |                       4.Very Hard                              |"<<endl;
 	cout<<"                                                  |                       5.Exit                                   |"<<endl;
 	cout<<"                                                  ------------------------------------------------------------------"<<endl;
 	cout<<"                                                                   ------------------------------                   "<<endl;
    cout<<"                                                                   |      Choose an option      |                   "<<endl;
    cout<<"                                                                   | 1,2,3,4 OR 5 & press enter |                   "<<endl;
    cout<<"                                                                   ------------------------------                   "<<endl;
 	char s;
    cin>>s;
    system("cls");
    int b1,b2,b3,b4;
    ofstream score;
    score.open("Score.txt");
    score<<b1;
    score.close();
    if(s=='1'){
    b1= Easy();
	 if(b1==50){
	 	g1=b1;
       	system("cls");
       	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
       	cout<<"                                                                 -----------------------------"<<endl;
       	cout<<"                                                                 |You have cleared this level|"<<endl;
       	cout<<"                                                                 -----------------------------"<<endl;
       	cout<<"                                                                 Press any chracter to proceed"<<endl;
       	getch();
       	system("cls");
       	cout<<"                                                            ----------------------------------------"<<endl;
       	cout<<"                                                            |Now Press 2 to Play Intermediate level|"<<endl;
       	cout<<"                                                            ----------------------------------------"<<endl;
       	Startgame();
	   }
	   else
	   {
   	system ("cls");
   	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
   	cout<<"                                                                       -------------------"<<endl;
   	cout<<"                                                                       |Sorry! You Failed|"<<endl;
	cout<<"                                                                       -------------------"<<endl<<endl<<endl;  	
   	cout<<"                                                                 Do you wanana play level 1 again "<<endl;
   	cout<<"                                                                        Press 'Y' OR 'N' " <<endl;
   	char e1;
	   cin>>e1; 
	   if(e1=='Y'||e1=='y'){
	   	system("cls");
	    Easy();
	   }
	  else if(e1=='n'||e1=='N'){
	   	system("cls");
	   	mainmenu();
}}} 
   else if(s=='2'){
   if(g1==50){
   	system("cls");
   int b2=Intermediate();
    if(b2==100){
	 	g2=b2;
       	system("cls");
       	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
       	cout<<"                                                                 -----------------------------"<<endl;
       	cout<<"                                                                 |You have cleared this level|"<<endl;
       	cout<<"                                                                 -----------------------------"<<endl;
       	cout<<"                                                                 Press any chracter to proceed"<<endl;
       	getch();
       	system("cls");
       	cout<<"                                                              ----------------------------------------"<<endl;
       	cout<<"                                                              |    Now Press 3 to Play Hard level    |"<<endl;
       	cout<<"                                                              ----------------------------------------"<<endl;
       	Startgame();
	   }
	   else
	   {
   	system ("cls");
   	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
   	cout<<"                                                                       -------------------"<<endl;
   	cout<<"                                                                       |Sorry! You Failed|"<<endl;
	cout<<"                                                                       -------------------"<<endl<<endl<<endl;  	
   	cout<<"                                                                  Do you wanana play level 2 again "<<endl;
   	cout<<"                                                                        Press 'Y' OR 'N' " <<endl;
   	char e1;
	   cin>>e1; 
	   if(e1=='Y'||e1=='y'){
	   	system ("cls");
	    Intermediate();
	   }
	   else if(e1=='n'||e1=='N'){
	   	system("cls");
	   	mainmenu();
}}
   }
   else{
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<endl;
   cout<<"                                                                      -----------------------------------"<<endl;
   cout<<"                                                                      |First you have to clear 1st level|"<<endl;
   cout<<"                                                                      -----------------------------------"<<endl;
   cout<<"                                                                         Press any chracter to proceed   "<<endl;
   getch();
   system("cls");
   Startgame();
   }}
   
   else if(s=='3'){
   	 if(g2==100){
   	system("cls");
   int b3=Hard();
    if(b3==150){
	 	g3=b3;
       	system("cls");
       	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
       	cout<<"                                                                      -----------------------------"<<endl;
       	cout<<"                                                                      |You have cleared this level|"<<endl;
       	cout<<"                                                                      -----------------------------"<<endl;
       	cout<<"                                                                      Press any chracter to proceed"<<endl;
       	getch();
       	system("cls");
    cout<<"                                                                   --------------------------------------"<<endl;
	cout<<"                                                                   |Now Press 4 to Play Very Hard level |"<<endl;
   	cout<<"                                                                   --------------------------------------"<<endl;
       	Startgame();
	   }
	   else
	   {
   	system ("cls");
   	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
   	cout<<"                                                                            -------------------"<<endl;
   	cout<<"                                                                            |Sorry! You Failed|"<<endl;
	cout<<"                                                                            -------------------"<<endl<<endl<<endl;  	
   	cout<<"                                                                         Do you wanana play level 3 again "<<endl;
   	cout<<"                                                                              Press 'Y' OR 'N' " <<endl;
   	char e1;
	   cin>>e1; 
	   if(e1=='Y'||e1=='y'){
	   	system ("cls");
	    Hard();
	   }
	   else if(e1=='n'||e1=='N'){
	   	system("cls");
	   	mainmenu();
}}}
   else{
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"<<endl;
   cout<<"                                                                    -----------------------------------------"<<endl;
   cout<<"                                                                    |First you have to clear 1st & 2nd level|"<<endl;
   cout<<"                                                                    -----------------------------------------"<<endl;
   cout<<"                                                                         Press any chracter to proceed   "<<endl;
   getch();
   system("cls");
   Startgame();
   }
   }
   else if(s=='4'){
   	 if(g3==150){
   	system("cls");
   int b4=Veryhard();
    if(b4==150){
	 	g4=b4;
       	system("cls");
       	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
       	cout<<"                                                                      -----------------------------"<<endl;
       	cout<<"                                                                      |You have cleared this level|"<<endl;
       	cout<<"                                                                      -----------------------------"<<endl;
       	cout<<"                                                                      Press any chracter to proceed"<<endl;
       	getch();
       	system("cls");
       	Startgame();
	   }
	   else
	   {
   	system ("cls");
   	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
   	cout<<"                                                                            -------------------"<<endl;
   	cout<<"                                                                            |Sorry! You Failed|"<<endl;
	cout<<"                                                                            -------------------"<<endl<<endl<<endl;  	
   	cout<<"                                                                         Do you wanana play level 3 again "<<endl;
   	cout<<"                                                                              Press 'Y' OR 'N' " <<endl;
   	char e1;
	   cin>>e1; 
	   if(e1=='Y'||e1=='y'){
	   	system ("cls");
	    Hard();
	   }
	   else if(e1=='n'||e1=='N'){
	   	system("cls");
	   	mainmenu();
}}
}
else{
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
   cout<<"                                                                    ---------------------------------------------"<<endl;
   cout<<"                                                                    |First you have to clear 1st 2nd & 3rd level|"<<endl;
   cout<<"                                                                    ---------------------------------------------"<<endl;
   cout<<"                                                                           Press any chracter to proceed   "<<endl;
   getch();
   system("cls");
   Startgame();
   }
   }
  else if(s=='5'){
   	system("cls");
   	exit();
   }
   else{
   	system("cls");
   	Startgame();
   }
 }
//------------------------------------------<<<ResumeGame function>>>------------------------------------------//
void resumegame(){
	  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"                                                                                       N/A                                  "<<endl;
}
//------------------------------------------<<<Game Techniques function>>>------------------------------------------//
void Gametechniques(){
	system("color F1");
//	cout<<"Certainly! Here's a brief description of your word search game with different levels:\n"<<endl;
	cout<<"\t\t\t\t   **Welcome to the Word Search Challenge!**\n"<<endl;
	cout<<"Choose your preferred challenge level: \n"<<endl;
	cout<<"1. **Easy Level (6x6 Grid):**\n- Find 5 words hidden in a 6x6 grid.\n- The words are straightforward to locate; simply identify the row and column where each word starts."<<endl;
	cout<<"\n2. **Intermediate Level (10x10 Grid):** \n- Up the ante with a 10x10 grid and 10 hidden words.\n- Sharpen your focus as you explore a larger area, finding words in various directions forward and backward."<<endl;
	cout<<"- Provide the row and column indices to mark the location of each discovered word.\n"<<endl;
	cout<<"3. **Hard Level (14x14 Grid):**\n- Take on the challenge of a 14x14 grid, where 15 words await your discovery."<<endl;
	cout<<"- The difficulty increases as you navigate a larger space, hunting for words in both horizontal vertical directions & diagonally forward backward."<<endl;
	cout<<"- Specify the row and column indices to pinpoint the exact location of each word.\n"<<endl;
	cout<<"4. **Very Hard Level (14x14 Grid with a Twist):**\n- Similar to the Hard Level but with a twist!"<<endl;
	cout<<"- Not only must you find 15 words, but you also need to provide the index numbers of each word's starting \n position (e.g., 0,1 and 0,2)."<<endl;
	cout<<"\n\n-------------------Good luck, and may the word search be ever in your favor!------------------";
	cout<<endl<<endl<<endl<<endl;
	getch();
	system("cls");
	mainmenu();
	
	
}
//------------------------------------------<<<Exit function>>>------------------------------------------//
void Exit(){
	
	system("color 9F");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"                                                          Are you sure you want to exit                   "<<endl;
	cout<<"                                                                 Press    Y/N                             "<<endl;
	char b;
	cin>>b;
	system("cls");
	if(b=='Y'||b=='y'){
		system("cls");
	}
	if(b=='N'||b=='n'){
		mainmenu();
	}}
//------------------------------------------<<<exit function>>>------------------------------------------//
void exit(){
	
	system("color F4");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"                                                          Are you sure you want to exit                   "<<endl;
	cout<<"                                                                 Press    Y/N                             "<<endl;
	char b;
	cin>>b;
	system("cls");
	if(b=='Y'||b=='y'){
		system("cls");
		mainmenu();
	}
	if(b=='N'||b=='n'){
		Startgame();
	}	 
}
//------------------------------------------<<<Easy function>>>------------------------------------------//
int Easy(){		int i,j,k,l,o;
system("color D7");
	char e[o];
	string a[5]={"sea","bull","how","use","shoes"};
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"                                                                 ------------------------------ "<<endl;
	cout<<"                                                              >>>|          LEVEL 1           |<<<<"<<endl;
	cout<<"                                                                 ------------------------------ "<<endl<<endl;
	cout<<"                                                                         press any key  "  <<endl;
	getch();
	system("cls");
	cout<<endl;
	cout<<"                                                                 ------------------------------                                                      ----------"<<endl;
	cout<<"                                                              >>>|          LEVEL 1           |<<<<                                                  |  Exit  |"<<endl;
	cout<<"                                                                 ------------------------------                                                      | Press E|"<<endl;
	cout<<"                                                                  You have to find 5 words here                                                      ----------"<<endl<<endl;
	cout<<"                                                               --------------------------------"<<endl;
	char b[6][6]={'s','e','a','g','h','s','i','b','h','i','o','h','d','u','s','e','u','o','f','l','p','e','f','e','d','l','h','o','w','s','d','e','g','p','r','f'};
	for(i=0;i<6;i++){
		cout<<"		          		                       |";
		for(j=0;j<6;j++){
			cout<<b[i][j]<<"    ";
		} 
		cout<<"|";
		cout<<endl;
	}
	cout<<"                                                               --------------------------------"<<endl;
	cout<<endl;
	int y=9;
	cout<<"                                                                             --------------------------------------------"<<endl;
	cout<<"Enter the words u found                                                      |You Have to find these words in "<<y<<" attempts|"<<endl;
	cout<<"                                                                             --------------------------------------------"<<endl;
	int sum;
	int z1;
	int a1=1,a2=1,a3=1,a4=1,a5=1;
	for( y=9,z1=0;y>0&&z1!=50;y--){
		string c;
		cin>>c;
		sum=10;
		sum=sum+z1;	
		if(c=="e"||c=="E"){
		cout<<"                                                                                     -----------------"<<endl;	
		cout<<"                                                                                     |   Are u sure  |"<<endl;
		cout<<"                                                                                     | Press y or n  |"<<endl;
		cout<<"                                                                                     -----------------"<<endl;
		char lm;
		cin>>lm;
		if(lm=='Y'||lm=='y'){
			system("cls");
			Startgame();
		}
		else{
			y++;
		}
		}
		else if(a[0]==c){
			if(a1==1){
		a1--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else          
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[1]==c){
			if(a2==1){
		a2--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else          
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[2]==c){
			if(a3==1){
		a3--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[3]==c){
			if(a4==1){
		a4--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else          
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[4]==c){
			if(a5==1){
		a5--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else 
		cout<<"                                                                                    No word found."<<endl;
}  
   return sum;
}
//------------------------------------------<<<Intermediate function>>>------------------------------------------//
int Intermediate(){
	system("color EA");
		int i,j;
	string a[10]={"app","apple","bag","laptop","oil","sip","conquer","new","last","touch"};
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"                                                                 ------------------------------"<<endl;
	cout<<"                                                              >>>|          LEVEL 2           |<<<<"<<endl;
	cout<<"                                                                 ------------------------------ "<<endl<<endl;
	cout<<"                                                                         press any key "  <<endl;
	getch();
	system("cls");
	cout<<endl;
	cout<<"                                                                 ------------------------------                                                      ----------"<<endl;
	cout<<"                                                              >>>|          LEVEL 2           |<<<<                                                  |  Exit  |"<<endl;
	cout<<"                                                                 ------------------------------                                                      | Press E|"<<endl;
	cout<<"                                                                 You have to find 10 words here                                                      ----------"<<endl<<endl;
	cout<<"                                                  -------------------------------------------------------"<<endl;
	char b[10][10]={'q','a','z','w','s','x','e','d','c','r','f','p','a','c','v','m','q','a','s','t','v','p','p','v','p','c','t','r','o','m','t','w','p','g','i','l','a','s',
	't','e','g','q','l','v','s','f','g','h','p','n','b','o','e','r','e','u','q','n','o','c','m','x','t','d','l','e','x','z','t','z','w','b','q','w','l','r','t','y','p','x',
	'h','a','j','t','o','u','c','h','a','w','i','g','g','q','n','e','w','m','l','x'};
	for(i=0;i<10;i++){
		cout<<"				                  |   ";
		for(j=0;j<10;j++){
			cout<<b[i][j]<<"    ";
		} 
		cout<<"|";
		cout<<endl;
	}
	cout<<"                                                  -------------------------------------------------------"<<endl;
	cout<<endl;
	cout<<"                                                                            ---------------------------------------------"<<endl;
	cout<<"Enter the words u found                                                     |You Have to find these words in 13 attempts|"<<endl;
	cout<<"                                                                            ---------------------------------------------"<<endl;
	int z1;
	int sum;
	int a1=1,a2=1,a3=1,a4=1,a5=1,a6=1,a7=1,a8=1,a9=1,a10=1;
	for(int y=13,z1=0;y>0&&z1!=100;y--){
		string c;
		cin>>c;
		sum=10;
		sum=sum+z1;	
		if(c=="e"||c=="E"){
		cout<<"                                                                                       -----------------"<<endl;	
		cout<<"                                                                                       |  Are you sure |"<<endl;
		cout<<"                                                                                       | Press y or n  |"<<endl;
		cout<<"                                                                                       -----------------"<<endl;
		char lm;
		cin>>lm;
		if(lm=='Y'||lm=='y'){
			system("cls");
			Startgame();
		}
		else{
			y++;
		}
		}
	    else if(a[0]==c){
			if(a1==1){
		a1--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[1]==c){
			if(a2==1){
		a2--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[2]==c){
			if(a3==1){
		a3--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[3]==c){
			if(a4==1){
		a4--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[4]==c){
			if(a5==1){
		a5--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[5]==c){
			if(a6==1){
		a6--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[6]==c){
			if(a7==1){
		a7--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[7]==c){
			if(a8==1){
		a8--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[8]==c){
			if(a9==1){
		a9--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[9]==c){
			if(a10==1){
		a10--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else 
		cout<<"                                                                                    No word found."<<endl;
}  
   return sum;
}
//------------------------------------------<<<Hard function>>>------------------------------------------//
int Hard(){
	system("color B8");
		int i,j;
	string a[15]={"sample","foot","put","truck","pencil","needle","ink","food","register","headphone","paper","not","rapper","shampoo","button"};
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"                                                                 ------------------------------"<<endl;
	cout<<"                                                              >>>|          LEVEL 3           |<<<<"<<endl;
	cout<<"                                                                 ------------------------------ "<<endl;
	cout<<"                                                                         press any key         "<<endl<<endl;
	getch();
	system("cls");
	cout<<endl;
	cout<<"                                                                 ------------------------------                                                      ----------"<<endl;
	cout<<"                                                              >>>|          LEVEL 3           |<<<<                                                  |  Exit  |"<<endl;
	cout<<"                                                                 ------------------------------                                                      | Press E|"<<endl;
	cout<<"                                                                 You have to find 15 words here                                                      ----------"  <<endl<<endl;
	cout<<"                                          ---------------------------------------------------------------------------"<<endl;
	char b[14][14]={'q','a','z','w','s','x','n','e','e','d','l','e','c','r','b','q','r','w','v','t','y','p','x','h','j','u','w','t','o','s','e','d','r','e','r','a','p','q','e','f',
	's','m','v','p','t','s','g','l','p','r','e','n','t','v','h','e','k','t','s','d','a','l','r','a','o','x','z','q','a','n','c','j','i','q','j','m','e','h','w','y','t','t','m','o','u',
	'j','g','o','u','l','p','u','t','h','o','s','p','c','r','w','e','q','g','d','p','l','h','m','o','q','o','z','t','g','r','t','a','v','a','f','e','q','f','g','o','x','d','l',
	'x','e','z','t','r','x','e','m','o','e','i','w','q','y','h','e','p','t','y','i','k','p','o','s','g','x','q','n','o','t','t','u','b','s','n','d','d','t','q','c','n','l','m',
	'a','p','e','n','c','i','l','q','n','e','m','w','x','w','u','l','i','a','q','g','a','s','q','r','t'};
		for(i=0;i<14;i++){
		cout<<"			          	  |   ";
		for(j=0;j<14;j++){
			cout<<b[i][j]<<"    ";
		} 
		cout<<"|";
		cout<<endl;
	}
	cout<<"                                          ---------------------------------------------------------------------------"<<endl;
	cout<<endl;
	cout<<"                                                                            ---------------------------------------------"<<endl;
	cout<<"Enter the words u found                                                     |You Have to find these words in 20 attempts|"<<endl;
	cout<<"                                                                            ---------------------------------------------"<<endl;
	int z1;
	int sum;
	int a1=1,a2=1,a3=1,a4=1,a5=1,a6=1,a7=1,a8=1,a9=1,a10=1,a11=1,a12=1,a13=1,a14=1,a15=1;
	for(int y=20,z1=0;y>0&&z1!=150;y--){
		string c;
		cin>>c;
		sum=10;
		sum=sum+z1;	
			if(c=="e"||c=="E"){          
		cout<<"                                                                                       -----------------"<<endl;	
		cout<<"                                                                                       |  Are you sure |"<<endl;
		cout<<"                                                                                       |  Press y or n |"<<endl;
		cout<<"                                                                                       -----------------"<<endl;
		char lm;
		cin>>lm;
		if(lm=='Y'||lm=='y'){
			system("cls");
			Startgame();
		}
		else{
			y++;
		}
		}
		else if(a[0]==c){
			if(a1==1){
		a1--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[1]==c){
			if(a2==1){
		a2--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[2]==c){
			if(a3==1){
		a3--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else                    
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[3]==c){
			if(a4==1){
		a4--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[4]==c){
			if(a5==1){
		a5--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else          
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[5]==c){
			if(a6==1){
		a6--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[6]==c){
			if(a7==1){
		a7--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[7]==c){
			if(a8==1){
		a8--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[8]==c){
			if(a9==1){
		a9--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[9]==c){
			if(a10==1){
		a10--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}	
		else if(a[10]==c){
			if(a11==1){
		a11--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[11]==c){
			if(a12==1){
		a12--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[12]==c){
			if(a13==1){
		a13--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[13]==c){
			if(a14==1){
		a14--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else if(a[14]==c){
			if(a15==1){
		a15--;
		z1=z1+10;
		cout<<"                                                                             Your points are "<< z1<<endl;}
		    else
	    cout <<"                                                                            You have already found this word "<<endl;
		}
		else 
		cout<<"                                                                                  No word found."<<endl;
}  
   return sum;
}
//------------------------------------------<<<VERY-HARD functions>>>------------------------------------------//
int Veryhard(){
	system("color 56");
			int a,b,i,j,k,l;
	string h[15]={"box","tile","hamper","frame","watch","battery","charger","high","toughest","string","carbon","pant","knee","blanket","spray"};
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"                                                                         ------------------------------"<<endl;
	cout<<"                                                                      >>>|          LEVEL 4           |<<<<"<<endl;
	cout<<"                                                                         ------------------------------"<<endl;
	cout<<"                                                                                 press any key         "<<endl<<endl;
	getch();
	system("cls");
	cout<<endl;
	cout<<"                                                                         ------------------------------                                                      ----------"<<endl;
	cout<<"                                                                      >>>|          LEVEL 4           |<<<<                                                  |  Exit  |"<<endl;
	cout<<"                                                                         ------------------------------                                                      | Press E|"<<endl;
	cout<<"                                                                       You have to find these 15 words here                                                  ----------"  <<endl<<endl;
	cout<<"                                                                       ------------------------------------"<<endl;
	cout<<"                                                                       |box,tile,hamper,frame,watch,battery|"<<endl;
    cout<<"                                                                       |charger,high,toughest,string,carbon|"<<endl;
	cout<<"                                                                       |     pant,knee,blanket,spray       |"<<endl;
	cout<<"                                                                      -------------------------------------"<<endl;
	cout<<"                                                                0    1    2    3    4    5    6    7    8    9    10   11   12   13   "<<endl;
	cout<<"                                                         --------------------------------------------------------------------------------"<<endl;
	char n[14][14]={
    {'p','r','f','n','o','q','y','t','l','o','q','e','d','c'},
    {'o','t','i','l','e','l','m','f','h','g','i','h','q','z'},
    {'s','b','o','x','z','n','h','l','s','t','r','c','u','c'},
    {'f','n','m','u','l','f','a','z','x','y','t','t','h','a'},
    {'g','h','i','j','g','k','m','l','y','m','n','a','o','r'},
    {'a','d','b','c','f','h','p','r','n','a','r','w','m','b'},
    {'q','i','f','r','a','m','e','t','p','g','j','i','k','o'},
    {'u','v','w','x','n','t','r','s','e','r','i','a','l','n'},
    {'f','q','g','i','t','n','p','r','t','t','f','o','q','s'},
    {'n','l','m','a','z','r','o','e','l','r','x','t','f','o'},
    {'m','n','b','l','a','n','k','e','t','l','i','q','j','l'},
    {'h','i','s','y','m','o','s','n','t','f','i','n','j','k'},
    {'l','a','c','d','f','n','m','k','s','l','r','o','g','u'},
	{'m','b','d','c','j','c','f','t','i','x','q','m','l','p'}};
for(i=0;i<14;i++){
	if(i<=9){
		cout<<"				                          "<<i<<" |   ";}
	if(i>=10){
		cout<<"			                        	  "<<i<<"|   ";
	}
		for(j=0;j<14;j++){
			cout<<n[i][j]<<"    ";
		} 
		cout<<"|";
		cout<<endl;
	}
	cout<<"                                                        --------------------------------------------------------------------------------"<<endl;
	string r;
	cout<<"                                                                            ---------------------------------------------"<<endl;
	cout<<"Enter the words u found                                                     |You Have to find these words in 20 attempts|"<<endl;
	cout<<"                                                                            ---------------------------------------------"<<endl;
	int z1;
	int sum;
	int k9;
	int a1=1,a2=1,a3=1,a4=1,a5=1,a6=1,a7=1,a8=1,a9=1,a10=1,a11=1,a12=1,a13=1,a14=1,a15=1;
	for(int k9=0;k9<20;k9++){
	cin >> r;	if(r=="e"||r=="E"){
		cout<<"                                                                                         -----------------"<<endl;
		cout<<"                                                                                         |  Are u sure   |"<<endl;	
		cout<<"                                                                                         |  Press y or n |"<<endl;
		cout<<"                                                                                         -----------------"<<endl;
		char lm;
		cin>>lm;
		if(lm=='Y'||lm=='y'){
			system("cls");
			Startgame();
		}
		else{
			k9++;
		}
		}
	else {
	cout<<"Enter the Location of First chracter of the word you found: "<<endl;
cin>>a>>b;
cout<<"The Location of First chracter of the word you found is: ";
cout<<"("<<a<<","<<b<<")"<<endl;
     int v = r.size();  // function for counting number of characters;
     char x[v];
     int s;
	for (l = 0,s=0; l < v,s<v; l++,s++)
	{  
	   x[s] = r[l];
	     // by using index value we access each character in a string easily;
	}
//	for (i = 0,s=0; i < v,s<v; i++,s++){
//	cout<<x[s];}

	int f=v;
		char d[f];

{for(i=a,j=b,f=0;v>0;i++,v--,f++){
   d[f]=n[i][j];}
	if(x[s]==d[f])
	cout<<"                                                                                                         You gain 10 points";}
{for(i=a,j=b,f=0;v>0;i--,v--,f++){
   d[f]=n[i][j];}
	if(x[s]==d[f])
	cout<<"                                                                                                         You gain 10 points"<<endl;}
{for(i=a,j=b,f=0;v>0;j--,v--,f++){
   d[f]=n[i][j];}
	if(x[s]==d[f])
	cout<<"                                                                                                         You gain 10 points"<<endl;}
{for(i=a,j=b,f=0;v>0;i++,v--,f++){
   d[f]=n[i][j];}
	if(x[s]==d[f])
	cout<<"                                                                                                         You gain 10 points"<<endl;}
{for(i=a,j=b,f=0;v>0;i--,j--,v--,f++){
   d[f]=n[i][j];}
	if(x[s]==d[f])
	cout<<"                                                                                                         You gain 10 points"<<endl;}
{for(i=a,j=b,f=0;v>0;i--,j++,v--,f++){
   d[f]=n[i][j];}
	if(x[s]==d[f])
	cout<<"                                                                                                         You gain 10 points"<<endl;}
{for(i=a,j=b,f=0;v>0;i++,j++,v--,f++){
   d[f]=n[i][j];}
	if(x[s]==d[f])
	cout<<"                                                                                                         You gain 10 points"<<endl;}
{for(i=a,j=b,f=0;v>0;i++,j--,v--,f++){
   d[f]=n[i][j];}
	if(x[s]==d[f])
	cout<<"                                                                                                         You gain 10 points"<<endl;}
}
}
}
