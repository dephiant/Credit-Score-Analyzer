#include <iostream>
#include <string>
using namespace std;
char credit_cat(int);
string placement(char);


int main() {
    int user_score;
    char credit_placement;
    string credit_category;

    cout << "CREDIT SCORE ANALYZER: \n\nThe categories include: \n\n- Excellent \n- Very Good \n- Good \n- Fair \n- Poor"<<endl;
    cout << "\nEnter credit score: ";
    cin >> user_score;


    credit_placement = credit_cat (user_score);
    credit_category = placement(credit_placement);

    cout << "\nBecause your score is "<< user_score <<
    " it is categorized as: " << credit_category <<endl;


    return 0;

}

char credit_cat(int user_score) {
    char user_cat;

    if (user_score >= 800 && user_score <= 850){
        user_cat = '5';
        } else if (user_score >= 740 && user_score < 799){
        user_cat = '4';
        } else if (user_score >= 670 && user_score < 739){
        user_cat = '3';
        } else if (user_score >= 580 && user_score < 669){
        user_cat = '2';
        } else {
        user_cat = '1';
        }
    cout << "\nYour current credit score is: " << user_score << endl;

    return user_cat;
    
}


string placement(char credit_placement){
    switch (credit_placement) {
     case '5':
            return "Excellent";
        case '4':
            return "Very Good";
        case '3':
            return "Good";
        case '2':
            return "Fair";
        case '1':
            return "Poor";
        default:
            return "Invalid score";

       }



}
