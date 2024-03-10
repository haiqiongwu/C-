#include <array>
#include <cctype>
#include <cstddef>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <ios>
#include <iostream>
#include <string>
#include "sales.h"

using namespace std;

// typedef struct CandyBar
// {

//     string pizzaCompany;
//     float  diameter;
//     float  weight;
// } CandyBar;

int main()
{
    // CandyBar* c1 = new CandyBar;

    // cout << "please pizza company:";
    // getline( cin, c1->pizzaCompany );

    // cout << "please pizza diameter:";
    // cin >> c1->diameter;

    // cout << "please pizza weight:";
    // cin >> c1->weight;

    // cout << c1->pizzaCompany << "," << c1->diameter << "," << c1->weight << endl;

    // delete c1;

    // string a;
    // cin >> a;

    // cout << a << endl;

    // char ch;
    // int  count = 0;
    // cin.get( ch );
    // while ( cin.fail() == false )
    // {
    //     cout << ch;
    //     ++count;
    //     cin.get( ch );
    // }
    // cout << endl << count << "characters read" << endl;

    // int num;
    // cout << "please Enter number:";
    // cin >> num;

    // int sum = 0;
    // while ( num != 0 )
    // {
    //     sum += num;
    //     cout << "到目前为止，输入的累计和为：" << sum << endl;
    //     cout << "please Enter number:";
    //     cin >> num;
    // }

    // int num1       = 100;
    // int num2       = 100;
    // int countYears = 0;

    // while ( num1 >= num2 )
    // {
    //     num1 += 100 * 0.1;
    //     num2 += num2 * 0.05;
    //     countYears++;
    // }

    // cout << "Daphne的资产是：" << num1 << endl << "Cleo的资产是：" << num2 << endl;
    // cout << countYears << endl;

    // char   automobile[ 50 ];
    // int    year;
    // double a_price;
    // double b_price;

    // ofstream outfile;
    // outfile.open( "test.txt" );
    // cout << "Enter the make and model of automobile:";
    // cin.getline( automobile, 50 );

    // cout << "Enter the model year:";
    // cin >> year;
    // cout << "Enter the original asking price:";
    // cin >> a_price;
    // b_price = 0.913 * a_price;

    // cout << fixed;                     //设置输出显示格式为固定小数点格式
    // cout.precision( 2 );               //设置保留两位小数点格式。
    // cout.setf( ios_base::showpoint );  //设置了这个标志后，输出浮点数时即使小数部分为0，也会显示小数点和后续的零。
    // cout << "Make and model:" << automobile << endl;
    // cout << "Year:" << year << endl;
    // cout << "Was asking $" << a_price << endl;
    // cout << "Now asking $" << b_price << endl;

    // //文件输出
    // outfile << fixed;
    // outfile.precision( 2 );
    // cout.setf( ios_base::showpoint );  //设置了这个标志后，输出浮点数时即使小数部分为0，也会显示小数点和后续的零。
    // outfile << "Make and model:" << automobile << endl;
    // outfile << "Year:" << year << endl;
    // outfile << "Was asking $" << a_price << endl;
    // outfile << "Now asking $" << b_price << endl;

    // outfile.close();

    // char ch;
    // char aa[ 20 ] = {};

    // int i = 0;

    // cout << "Please enter a character:";
    // cin >> ch;

    // while ( ch != '@' )
    // {

    //     if ( islower( ch ) )
    //         ch = toupper( ch );
    //     else
    //         ch = tolower( ch );
    //     aa[ i ] = ch;
    //     i++;
    //     cout << "Please enter a character:";
    //     cin >> ch;
    // }

    // cout << aa << endl;

    // return 0;

    // double ar[ 3 ] = { 1.23, 3.34, 4.00 };
    // SALES::


    return 0;
}
