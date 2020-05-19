//乐学偶得版权所有，主讲人：William 公众号：乐学Fintech 网站：lexueoude.com
// Created by william from lexueoude.com
//

#include <iostream>

using namespace std;

int main() {
    const int howManyMonthsInAYear = 12;

    double originalPrincipal = 123456789;
    double yearInterestRate = 0.04;
    int howManyYearsOfYourLoan = 30;

    double monthInterestRate = yearInterestRate / howManyMonthsInAYear;
    long howManyMonthsOfLoan = howManyMonthsInAYear * howManyYearsOfYourLoan;

//    乐学偶得小tips：可通过std::fixed, std::scientific, std::hexfloat, std::defaultfloat进行输出调整，并注意观察数据类型
    cout << fixed << "贷款本金:" << originalPrincipal << "   " << "年利率:" << yearInterestRate << "   " << "贷款年限:"
         << howManyYearsOfYourLoan << "   " << "折合每月利率:" << monthInterestRate << "   " << "贷款期限（月）："
         << howManyMonthsOfLoan
         << endl;

}