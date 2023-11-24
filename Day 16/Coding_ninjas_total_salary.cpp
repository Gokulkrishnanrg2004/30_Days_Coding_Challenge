/*
Ninja just got an offer letter from a reputable company. The company sent him an offer letter along with the salary bifurcation.

In that bifurcation, Total Salary was not mentioned but instead a 'basicSalary' and an upper case character representing grade was mentioned, depending on which the Total Salary is calculated.
Help Ninja in calculating his total salary, where total salary is defined as:

'totalSalary' = 'basic' + 'hra' + 'da' + 'allowance' - 'pf'

The above terms are as follows:
"hra' = 20% of 'basic'
'da = 50% of 'basic'
'allowance' = 1700 if grade = 'A'
'allowance' = 1500 if grade = 'B'
'allowance' = 1300 if grade = 'C' or any other character
"pf=11% of 'basic'. */

#include <bits/stdc++.h> 
int totalSalary(int basic, char grade) 
{
    float total;
    int all;
    float hra= (0.2*basic);
    float da=(0.5*basic);
    if(grade=='A')
    {
        all=1700;
    }
    else if(grade=='B')
    {
        all=1500;
    }
    else if(grade=='C')
    {
        all=1300;
    }
    float pf=(0.11*basic);
    total=basic+hra+da+all-pf;
    return round(total);
}
