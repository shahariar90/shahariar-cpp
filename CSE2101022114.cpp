#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;

//1: Flag

void flag () {
    int gd = DETECT, gm;

    initgraph (&gd, &gm, "");

   setcolor(GREEN);
    rectangle(50,100,250,200);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(51,101,GREEN);

    setcolor(RED);
    circle(140,150,30);
    setfillstyle(SOLID_FILL,RED);
    floodfill(141,151,RED);

    setcolor(WHITE);
    rectangle(50,200,60,400);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(51,201,WHITE);



    getch();

    closegraph ();

}

//2-Emoji

void emoji() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
//Outer Line
    setcolor(RED);//outer line color
    circle(200,200,70);


    //Eye
    circle(175,160,10);//Left eye
    circle(225,160,10);//Right eye
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(200,200,RED);

    //Mouth
    arc(200,200,192,350,30);//up mouth
    arc(200,210,170,12,30);//down mouth
    setfillstyle(SOLID_FILL,RED);
    floodfill(200,235,RED);

    getch();
    closegraph();
}


//3: House

void house () {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

     //outer line
    setcolor(GREEN);
    rectangle(160,180,500,420);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(161,181,GREEN);


    //Roof
    setcolor(WHITE);
    line(160,180,320,50);//Left roof
    line(500,180,320,50);//Left roof
    setcolor(WHITE);
    line(500,180,160,180);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(450,170,15);


    //Door
    setcolor(RED);
    rectangle(260,290,390,420);
    setfillstyle(SOLID_FILL,RED);
    floodfill(261,291,RED);

    //Window
    setcolor(RED);
    rectangle(180,210,260,270);//Left Window
    setfillstyle(SOLID_FILL,RED);
    floodfill(181,211,RED);

    setcolor(RED);
    rectangle(390,210,460,270);//Left Window
    setfillstyle(SOLID_FILL,RED);
    floodfill(391,211,RED);


    getch();
    closegraph();

}




int main() {
    int choice;
    //Choice List
    cout << "1: Flag \n";
    cout << "2: Emoji \n";
    cout << "3: House \n";
    cout << "\n";

    cout << "Enter Your Choice: ";
    cin >> choice;



    switch(choice) {
        case 1:
           flag();
            break;
        case 2:
            emoji();
            break;
        case 3:
            house();
            break;

        default:
            std::cout << "Invalid choice!";
            break;
    }

    return 0;
}
