#include <iostream>
using namespace std;

void p1(int n){
    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            cout << '*';
        }
        cout << '\n';
    }
}

void p2(int n){
    for(int i=0; i < n; i++){
        for(int j=0; j <= i; j++){
            cout << '*';
        }
        cout << '\n';
    }
}

void p3(int n){
    for(int i=1; i <= n; i++){
        for(int j=1; j <= i; j++){
            cout << j;
        }
        cout << '\n';
    }
}
void p4(int n){
    for(int i=1; i <= n; i++){
        for(int j=1; j <= i; j++){
            cout << i;
        }
        cout << '\n';
    }
}
void p5(int n){
    for(int i=1; i <= n; i++){
        for(int j=0; j <= n - i; j++){
            cout << '*';
        }
        cout << '\n';
    }
}

void p6(int n){
    for(int i=0; i < n; i++){
        for(int j=1; j <= n - i; j++){
            cout << j;
        }
        cout << '\n';
    }
}

void p7(int n){
    for (int i = 0; i < n; i++)
    {
        // space
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << " ";
        }
        // main
        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
}

void p8(int n){
    for (int i = 0; i < n; i++)
    {
        // space
        for (int k = 0; k < i; k++)
        {
            cout << ".";
        }
        // main
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
}

void p9(int n){
    for (int i = 0; i < n; i++)
    {
        // space
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << " ";
        }
        // main
        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
    for (int i = 0; i < n; i++)
    {
        // space
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        // main
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
}

void p10(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
    
}

void p11(int n){
    int k;
    for (int i = 0; i < n; i++)
    {
        (i % 2 == 0)? k = 1 : k = 0;
                  
        for (int j = 0; j < i+1; j++)
        {
            cout << k;
            k = !k;
        }
        cout <<'\n';
    }
}

void p12(int n){
    //spaces
    int s = 2*(n-1);
    for (int i = 0; i < n; i++)
    {
        for (int  j = 1; j < i+1; j++)
        {
            cout << j;
        }
        for (int k = 0; k < s; k++)
        {
            cout << ' ';
        }
        for (int  j = i; j >= 1; j--)
        {
            cout << j;
        }
        s -= 2;
        cout << '\n';
    }
}

void p13(int n){
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i +1; j++)
        {
            cout << num << " ";
            num++;
        }
        cout <<'\n';
    }
}

void p14(int n){
    for (int i = 0; i < n; i++)
    {
        char c = 'A';
        for (int j = 0; j < i+1; j++)
        {
            cout << c;
            c++;
        }
        cout << '\n';
    }
}

void p15(int n){
    for (int i = 0; i < n; i++)
    {
        char c = 'A';
        for (int j = 0; j < n - i; j++)
        {
            cout << c;
            c++;
        }
        cout << '\n';
    }
}

void p16(int n){
    char c = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << c;
        }
        c++;
        cout << '\n';
    }
}

void p17(int n) {
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Initialize character to start from 'A'
        char ch = 'A';

        // Calculate midpoint of the row
        int breakpoint = (2 * i + 1) / 2;

        // Print the characters in the row
        for (int j = 1; j <= 2 * i + 1; j++) {
            cout << ch;

            if (j <= breakpoint) ch++;
            else ch--;
        }

        // Print trailing spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << '\n';
    }
}

void p18(int n){
    for (int i = 0; i < n; i++)
    {
        for (char ch = ('A' + n - 1) - i; ch <= 'A' + n - 1; ch++)
        {
            cout << ch;
        }
        cout << '\n';
    }
}

void p19(int n){
    for(int i = 0; i < n; i++){
        // upper part
        for (int  j = 0; j < n - i; j++)
        {
            cout << '*';
        }
        for (int k = 0; k < 2*i; k++)
        {
            cout << " ";
        }
        for (int  j = 0; j < n - i; j++)
        {
            cout << '*';
        }

        cout << '\n';
    }
    int space = 2;
    for(int i = 0; i < n; i++){
        // upper part
        for (int  j = 0; j < i+1; j++)
        {
            cout << '*';
        }
        for (int k = 0; k < 2*n - space; k++)
        {
            cout << " ";
        }
        space += 2;
        for (int  j = 0; j < i+1; j++)
        {
            cout << '*';
        }

        cout << '\n';
    }
}

void p20(int n){
    // Initialize spaces between star blocks
    int spaces = 2 * n - 2;

    // Loop for rows
    for (int i = 1; i <= 2 * n - 1; i++) {
        // Calculate stars for first half
        int stars = i;

        // Adjust stars for second half
        if (i > n) stars = 2 * n - i;

        // Print left stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        // Print spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Print right stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        // Move to next line
        cout << '\n';

        // Adjust spaces for next row
        if (i < n) spaces -= 2;
        else spaces += 2;
    }
}

void p21(int n){
    char star = '*';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}

void p22(int n) {
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            // Calculate distance from top
            int top = i;
            // Calculate distance from left
            int left = j;
            // Calculate distance from bottom
            int bottom = (2 * n - 2) - i;
            // Calculate distance from right
            int right = (2 * n - 2) - j;

            // Take the minimum of all four distances
            int minDist = min(min(top, bottom), min(left, right));

            // Print number (starts with n at border, decreases inside)
            cout << (n - minDist) << " ";
        }
        cout << endl;
    }
}

int main(){
    // p1(5);
    // p2(5);
    // p3(5);
    // p4(5);
    // p5(5);
    // p6(5);   
    // p7(5);   
    // p8(5);   
    // p9(5);
    // p10(5);
    // p11(5);
    // p12(5);
    // p13(5);
    // p14(7);
    // p15(9);
    // p16(8);
    // p17(4);
    // p18(5);
    // p19(10)
    // p20(5);
    // p21(3);
    p22(4);

    return 0;
}