#include <bits/stdc++.h>
using namespace std;


struct Book {
    double pgs;
    double rate;
    double ratio;
};

bool sortByRatio(Book a, Book b) {
    return a.ratio > b.ratio;
}

int main() {
    double n, X;
    cin >> n >> X;

    vector<Book> boks(n);
    for (double i = 0; i < n; i++) {
        cin >> boks[i].pgs >> boks[i].rate;
        boks[i].ratio = (double)boks[i].pgs / boks[i].rate;
    }

    sort(boks.begin(), boks.end(), sortByRatio);

    double pgs = 0;
    double total_price = 0;
    double books_purchased = 0;

    for (double i = 0; i < n; i++) {
        if (total_price + boks[i].rate <= X) {
            pgs += boks[i].pgs;
            total_price += boks[i].rate;
            books_purchased++;
        } else {
            double remaining_price = X - total_price;
            pgs += (double)(remaining_price * boks[i].ratio);
            break;
        }
    }

    cout <<" max boks "<< books_purchased <<endl<< "max cost  " << pgs <<endl<< "page " << X << endl;

    return 0;
}