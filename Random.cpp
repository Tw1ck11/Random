// Random.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
using namespace std;

int random(int min, int max) {
    srand(time(NULL));
    int num = min + rand() % (max - min + 1);
    return num;
}

int main()
{
    setlocale(0, "");

    /////TASK 1
    double weight, growth, ideal_weight;
    char gender;

    cout << "Enter your gender (Format M or F): ";
    cin >> gender;
    cout << "Enter your weight in kg: ";
    cin >> weight;
    cout << "Enter your height in cm: ";
    cin >> growth;

    if (gender == 'M' || gender == 'm') {

        ideal_weight = growth - 100;

        if (weight == ideal_weight) {
            cout << "You are the ideal weight" << endl;
        }
        else if (weight - ideal_weight > 0) {
            cout << "You need to reset " << weight - ideal_weight << "kg" << endl;
        }
        else {
            cout << "You need to dial" << ideal_weight - weight << "kg" << endl;
        }
    }
    else if (gender == 'F' || gender == 'f') {

        ideal_weight = growth - 110;

        if (weight == ideal_weight) {
            cout << "You are the ideal weight" << endl;
        }
        else if (weight - ideal_weight > 0) {
            cout << "You need to reset" << weight - ideal_weight << " kg" << endl;
        }
        else {
            cout << "You need to dial" << ideal_weight - weight << " kg" << endl;
        }
    }
    else {
        cout << "It's an unknown gender for me" << endl;
    }






    ///////Task2
    int birthday_day, birthday_month;
    char full_stop;
    string predictions[] =
    { "There will be more cases than you expected. It's worth starting the day with the most important; this approach will allow you to avoid many worries and worries.",
    "You should not rush. Morning is hardly suitable for important matters and serious decisions. Most likely, you will need time to gather your thoughts, tune in the right way.",
    "At the beginning of the day, it can be difficult to keep calm. This time will be quite stressful, especially for those who have planned trips, important meetings, participation in some social events.",
    "Be persistent and you will achieve great things. When choosing what to focus on today, rely on intuition; do what causes genuine interest.",
    "If you have big plans for this day, be prepared to act on your own. Even trusted allies will hardly be able to help you today, but they can unwittingly create problems.",
    "Do not rush. The first half of the day should be spent calmly, if possible avoiding communication with people who often unbalance you, make you worry.",
    "Many issues today will be resolved faster and easier than expected. And all because you will take a fresh look at what previously seemed familiar and completely natural.",
    "You can expect a week of reflection and analysis. You have accumulated many problems, but you will be able to solve many in the coming days.",
    "This week you can confidently begin to radically change your life.",
    "An interesting business trip is likely on Monday, which will expand the circle of contacts and open up new perspectives.",
    "This week you will find a variety of events and meetings that threaten to tire you.",
    "It looks like some of your views are a bit outdated, don't cling to them, gather your strength, change.",
    "A good time to spend it on vacation at sea. Well, if you have to work in the meantime, try to control your emotions."
    };
    cout << "Enter the day and month of your birth (in DD.MM format): ";
    cin >> birthday_day >> full_stop >> birthday_month;

    if (birthday_day < 1 || birthday_day > 31 || birthday_month < 1 || birthday_month > 12 || full_stop != '.') {
        cout << "Date entered incorrectly" << endl;
    }
    else {
        if ((birthday_day >= 21 && birthday_month == 3) || (birthday_day <= 20 && birthday_month == 4)) {
            cout << "You are an Aries. your prediction: " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 21 && birthday_month == 4) || (birthday_day <= 20 && birthday_month == 5)) {
            cout << "You are an Taurus. your prediction: " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 21 && birthday_month == 5) || (birthday_day <= 20 && birthday_month == 6)) {
            cout << "You are Gemini.your prediction : " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 21 && birthday_month == 6) || (birthday_day <= 22 && birthday_month == 7)) {
            cout << "You are Cancer. your prediction: " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 23 && birthday_month == 7) || (birthday_day <= 22 && birthday_month == 8)) {
            cout << "You are Leo.your prediction : " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 23 && birthday_month == 8) || (birthday_day <= 22 && birthday_month == 9)) {
            cout << "You are a Virgo. your prediction: " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 23 && birthday_month == 9) || (birthday_day <= 22 && birthday_month == 10)) {
            cout << "You are Libra.your prediction : " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 23 && birthday_month == 10) || (birthday_day <= 22 && birthday_month == 11)) {
            cout << "You are a Scorpio.your prediction : " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 23 && birthday_month == 11) || (birthday_day <= 21 && birthday_month == 12)) {
            cout << "You are a Sagittarius.your prediction : " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 22 && birthday_month == 12) || (birthday_day <= 19 && birthday_month == 1)) {
            cout << "You are a Capricorn.your prediction : " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 20 && birthday_month == 1) || (birthday_day <= 19 && birthday_month == 2)) {
            cout << "You are an Aquarius.your prediction : " << predictions[random(0, 11)] << endl;
        }
        else if ((birthday_day >= 20 && birthday_month == 2) || (birthday_day <= 20 && birthday_month == 3)) {
            cout << "You are Pisces.your prediction : " << predictions[random(0, 11)] << endl;
        }
        else {
            cout << "There seems to be something wrong with the date." << endl;
        }
    }







    /////////Task3
     //TASK 3
    SYSTEMTIME t;
    GetLocalTime(&t);
    int day, month, year;
    char dot;

    cout << "Enter today's date in the format DD.MM.YYYY: " << endl;
    cin >> day >> dot >> month >> dot >> year;

    if (dot != '.' || day < 1 || day > 31 || month < 1 || month > 12) {
        cout << "Wrong date entered" << endl;
    }
    else {
        if (day == t.wDay && month == t.wMonth && year == t.wYear) {
            cout << "The date is true" << endl;

            if (t.wDay == 31 && (t.wMonth == 1 || t.wMonth == 3 || t.wMonth == 5 || t.wMonth == 7 || t.wMonth == 8 || t.wMonth == 10)) {
                cout << "Tomorrow there will be " << "01." << t.wMonth + 1 << "." << t.wYear << endl;
            }
            else if (t.wDay == 30 && (t.wMonth == 4 || t.wMonth == 6 || t.wMonth == 9 || t.wMonth == 11)) {
                cout << "Tomorrow there will be " << "01." << t.wMonth + 1 << "." << t.wYear << endl;
            }
            else if (t.wDay == 28 && t.wMonth == 2) {

                if (t.wYear % 4 == 0 && t.wDay == 29) {
                    cout << "Tomorrow there will be " << "01." << t.wMonth + 1 << "." << t.wYear << endl;
                }
                else if (t.wYear % 4 != 0 && t.wDay == 28) {
                    cout << "Tomorrow there will be " << "01." << t.wMonth + 1 << "." << t.wYear << endl;
                }
            }
            else if (t.wDay == 31 && t.wMonth == 12) {
                cout << "Tomorrow there will be " << "01." << t.wMonth + 1 << "." << t.wYear + 1 << endl;
            }
            else {
                cout << "Tomorrow there will be " << t.wDay + 1 << "." << t.wMonth << "." << t.wYear << endl;
            }
        }

        else {
            cout << "The date is true" << endl;

            if (t.wDay == 31 && (t.wMonth == 1 || t.wMonth == 3 || t.wMonth == 5 || t.wMonth == 7 || t.wMonth == 8 || t.wMonth == 10)) {
                cout << "Tomorrow there will be " << "01." << t.wMonth + 1 << "." << t.wYear << endl;
            }
            else if (t.wDay == 30 && (t.wMonth == 4 || t.wMonth == 6 || t.wMonth == 9 || t.wMonth == 11)) {
                cout << "Tomorrow there will be " << "01." << t.wMonth + 1 << "." << t.wYear << endl;
            }
            else if (t.wDay == 28 && t.wMonth == 2) {

                if (t.wYear % 4 == 0 && t.wDay == 29) {
                    cout << "Tomorrow there will be " << "01." << t.wMonth + 1 << "." << t.wYear << endl;
                }
                else if (t.wYear % 4 != 0 && t.wDay == 28) {
                    cout << "Tomorrow there will be " << "01." << t.wMonth + 1 << "." << t.wYear << endl;
                }
            }
            else if (t.wDay == 31 && t.wMonth == 12) {
                cout << "Tomorrow there will be " << "01." << t.wMonth + 1 << "." << t.wYear + 1 << endl;
            }
            else {
                cout << "Tomorrow there will be " << t.wDay + 1 << "." << t.wMonth << "." << t.wYear << endl;
            }
        }
    }




    /////Task4
    int money = 0, const_money, answer1, answer2, answer3, answer4, answer5, i = 0;
    string questions[] =
    { "Which animal is insectivorous?\n ​​1) squirrel\n 2) mole\n 3) fox\n 4) wolf\n",
    "What is the thinnest thread in nature?\n 1) silk\n 2) wool\n 3) cobweb\n 4) linen\n",
    "How many months in a year?\n 1) 6\n 2) 12\n 3) 11\n 4) 10\n",
    "What did the Tin Woodman want?\n 1) heart\n 2) ax\n 3) mind\n 4) money\n",
    "Which of the units of measurement is superfluous here?\n 1) second\n 2) meter\n 3) newton\n 4) hour\n",

    cout << questions[i];
    cout << "Your answer: ";
    cin >> answer1;
    if (answer1 == 2) {
        i++;
        money = 1000;
        cout << "This is the correct answer. You have received 1000 UAH! Next question:" << endl;
        cout << questions[i];
        cout << "Your answer: ";
        cin >> answer2;
        if (answer2 == 3) {
            i++;
            money = money - money + 5000;
            cout << "This is the correct answer.You have received 5000 UAH!Next question :" << endl;
            cout << questions[i];
            cout << "Your answer: ";
            cin >> answer3;
            if (answer3 == 2) {
                i++;
                money = money - money + 10000;
                cout << "This is the correct answer. You have received 10,000 UAH! Next question:" << endl;
                cout << questions[i];
                cout << "Your answer: ";
                cin >> answer4;
                if (answer4 == 1) {
                    i++;
                    money = money - money + 20000;
                    cout << "This is the correct answer.You have received 20000 UAH!Next question :" << endl;
                    cout << questions[i];
                    cout << "Your answer: ";
                    cin >> answer5;
                    if (answer5 == 4) {
                        i++;
                    }
                        else {
                            cout << "The game is over.You answered incorrectly.Your prize" << money << " UAH" << endl;
                        }
                        }
                        else {
                            cout << "The game is over.You answered incorrectly.Your prize" << money << " UAH" << endl;
                        }
                    }
                    else {
                        cout << "The game is over.You answered incorrectly.Your prize" << money << " UAH" << endl;
                    }
                }
                else {
                    cout << "The game is over.You answered incorrectly.Your prize" << money << " UAH" << endl;
                }
            }
            else {
                cout << "The game is over.You answered incorrectly.Your prize" << money << " UAH" << endl;
            }
    }


