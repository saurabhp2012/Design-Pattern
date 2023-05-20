#include<iostream>
#include "DataSource.cpp"
#include "Spreadsheet.cpp"
#include "Chart.cpp"
using namespace std;
 
int main()
{
    DataSource* datasrc1 = new DataSource();

    Spreadsheet* sheet1 = new Spreadsheet();
    Spreadsheet* sheet2 = new Spreadsheet(); 
    Chart* chart = new Chart();

    datasrc1->addObservver(sheet1);
    datasrc1->addObservver(sheet2);
    datasrc1->addObservver(chart);


    datasrc1->setValue(1);


    return 0;
}