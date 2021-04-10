#include <iostream>
using namespace std;
// Global Variables
bool toy_productoverONEHUNDRED = (toy_productoverONEHUNDRED <= 50);
bool food_productoverONEHUNDRED = (food_productoverONEHUNDRED <= 50);
bool electronic_productoverONEHUNDRED = (electronic_productoverONEHUNDRED <= 50);
bool clothing_productoverONEHUNDRED = (clothing_productoverONEHUNDRED <= 50);

class Products{
    public:
        int food_products;
        int toy_products;
        int electronic_products;
        int clothing_products;
        int getTotalProducts(){
            return food_products + toy_products + electronic_products + clothing_products;
            
        }
};
int getProductInput(){
    int choice_toy;
    int choice_food;
    int choice_electronic;
    int choice_clothing;

    Products products;
    cout << "How much toy units do you have in your store?" << endl;
    cin >> choice_toy;
    cout << "How much food units do you have in your store?" << endl;
    cin >> choice_food;
    cout << "How much electronic units do you have in your store?" << endl;
    cin >> choice_electronic;
    cout << "How much clothing units do you have in your store?" << endl;
    cin >> choice_clothing;
}

int main(){
    Products product;
    product.getTotalProducts();
    getProductInput();
    cout << "In all, you have: " << product.getTotalProducts() << " units!";
}