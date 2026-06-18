//  CARS (Recommendation and Gamification)  Using TREES
// vcars = vector , Cars = struct
#include<iostream>
#include<vector>
#include<queue>
#include<utility>
#include<string>
#include<functional>

using namespace std;

struct Cars
{
    string name;            // Macan
    string brand;           //Porsche
    string transmission;    //Dual clutch Automatic transmission
    string fuel;            //Petrol
    string colorOptions;    // Black
    float rating;           // 4.6/5
    int price;              //PKR 52,000,000
    int year;               //2024
};
//vector<type>name
vector<Cars>vcars 
{
    // Luxury and High-Performance Vehicles

    {"Macan" , "Porsche" , "Automatic" , "Petrol" , "Black" , 4.6 , 52000000 , 2024},
    {"C-Class C180	" , "Mercedes-Benz" , "Automatic" , "Petrol" , "Obsidian Black, Silver" , 4.8 , 14110000 , 2025},
    {"3 Series 320i	" , "BMW" , "Automatic" , "Petrol " , "Alpine White, Black" , 4.7 ,  8000000 , 2025},
    {"A4 35 TFSI" , "Audi" , "Automatic" , "Petrol" , "Ibis White, Grey" , 4.6 , 12380000 , 2025},
    {"Macan Base" , "Porsche" , "7 Speed PDK" , "Petrol" , "White, Volcano Grey" , 4.7 , 41400000 , 2025},
    {"Macan Electric" , "Porsche" , "Automatic" , "Electric" , "Dolomite Silver, Black" , 4.8 , 47500000 , 2025},
    {"S-Class S500" , "Mercedes-Benz" , "Automatic" , "Petrol" , "Obsidian Black, White" , 4.9 , 11500000 , 2025},
    {"7 Series 740Li" , "BMW" , "Automatic" , "Petrol" , "Mineral White, Black" , 4.8 , 15550000 , 2025},
    {"A8 L 55 TFSI" , "	Audi" , "Automatic	" , "Petrol" , "Moonlight Blue, Silver" , 4.8 ,  60000000 , 2025},
    {"Roma" , "Ferrari" , "Automatic", "Petrol" , "	Rosso Corsa, Nero" , 4.9 , 69760000 , 2023},
    {"SF90 Stradale" , "Ferrari" , "Automatic" , "Hybrid" , "Giallo Modena, Black" , 5.0 , 150000000 , 2025},
    {"cultus" , "hinda" ,"manual" , "petrol" , "blaack" , 4.6 , 2400000 , 2025},

    //Popular SUVs and Crossovers
    {"Sportage Alpha" , "Kia" , "Automatic" , " Petrol" , "Black,White,Grey" , 4.6 , 7300000 , 2025},
    {"Tucson GLS" , "Hyundai" , "Automatic" , "Petrol" , "Silver, White, Black" , 4.5 , 7899000 , 2025},
    {"Fortuner 2.7G" , "Toyota" , "Automatic" , "Petrol" , "Super White, Black" , 4.7 , 12489000 , 2025},
    {"Vezel Hybrid Z" , "Honda" , "Automatic" , "Hybrid" , "Pearl White, Silver" , 4.6 , 9500000 , 2025},
    {"HS Essence  " , "MG" , "Automatic" , "Petrol" , "Red, White, Black" , 4.4 , 8499000 , 2025},

    //Affordable & Mid-Range Cars (Ideal for Middle-Class Families)
    {"Mehran VX" , "Suzuki" , "Manual" , "Petrol" , "White, Silver, Grey" , 3.5 ,  850000 ,   2019},
    {"Alto VX" , "Suzuki" , "Manual" , "Petrol" , "White, Silver, Black" , 4.0 ,  1859000 ,  2025},
    {"Cultus VXR" , "Suzuki" , "Manual" , "Petrol" , "White, Graphite Grey" , 4.2 , 2754000 ,  2025},
    {"Wagon R VXL" , "Suzuki" , "Manual" , "Petrol" , "Pearl Red, Silky Silver" , 4.1 ,  2877000 ,  2025},
    {"Bolan (Hi-Roof)" , "Suzuki", "Manual" , "Petrol" , "White" , 3.8 ,  1944000 ,  2025},
    {"City 1.2L MT" , "Honda" ,  "Manual" , "Petrol" , "Urban Titanium, Silver" , 4.3 ,  4699000 ,  2025},
    {"Corolla GLi 1.3L" , "Toyota" , "Manual" , "Petrol" , "Super White, Black" , 4.4 ,  4500000 ,  2025},
    {"Yaris 1.3L GLi MT" , "Toyota" , "Manual" , "Petrol" , "Attitude Black, Silver" , 4.2 ,  4399000 ,  2025},
    {"Civic 1.5L Turbo" , "Honda" ,  "CVT" , "Petrol" , "Crystal Black, White" , 4.5 ,  6349000 ,  2025},
    {"Corolla Altis 1.6L" , "Toyota", "Automatic" , "Petrol" , "Phantom Brown, Silver" , 4.5 ,  5979000 ,  2025}
};

struct Pricenode
{
    Cars car;
    Pricenode *left;
    Pricenode *right;
    Pricenode(Cars c) : car(c) , left(nullptr) , right(nullptr){}
    /* constructor
    passing the object from the Cars struct in it and then storing that object(c) in "car"
    car = c; left = nullptr , right  =  nullptr;
    */
     
};
//entering the price data in the bst to make it sorted easily and get rid off linear search(less time less space)
Pricenode* insert(Pricenode *root  , Cars car)
{
    if (root == NULL)
    return new Pricenode(car);

    if (car.price < root->car.price )
        root->left = insert(root->left , car);
    
    else
        root->right = insert(root->right , car);
    
    return root;
}
//inorder traversal LNR(Left Node Right) cars price arranged in ascending order 
void inorder(Pricenode *root)
{
    if (!root)
        return;
    inorder(root->left);
    cout<< root->car.name<< " PKR" << root->car.price<< "/-" <<endl;
    inorder(root->right);
}
string tolowercase(string str)
{
    for (int i = 0; i < str.length(); i++)
        str[i] = tolower(str[i]);
    return str;
    
}
//filtering fuel, transmission and brand with the methods
void filterByFuel(const vector<Cars>& vcars, const string& fuelinput)
{
    int count = 1;
    string fueltype = tolowercase(fuelinput);

    cout<<endl<<"Cars with the fuel type "<< fuelinput <<endl;
    for (const auto& car : vcars )
    {
        if (tolowercase(car.fuel) == fueltype)
        {
            cout<<count<<". "<<car.name<<" | "<<car.brand<<" | Price: PKR "<<car.price<<" /-"<<endl;
            count++;
        }
    }
}

void filterByBrand(const vector<Cars>& vcars , const string& brandinput)
{
    int count = 1;
    string brand = tolowercase(brandinput);
    cout<<endl<<" Cars owned by the brand " <<brandinput<< endl;

    for (const auto& car : vcars)
    {
        if (tolowercase(car.brand) == brand)
            {
                cout<<count<<". "<<car.name<<" | "<<car.fuel<<" | Price: PKR "<<car.price<<" /-"<<endl;
                count++;
            }
    }
}

void filterByTransmission(const vector<Cars>& vcars , const string& transmissioninput)
{
    int count = 1;
    string transmission = tolowercase(transmissioninput);
    cout<<" Cars with transmission " <<transmissioninput<< endl;

    for (const auto& car : vcars)
    {
        if (tolowercase(car.transmission) == transmission)
        {
            cout<<count<<". "<<car.name<<" | "<<car.brand<<" | Price: PKR "<<car.price<<" /-"<<endl;
            count++;
        }
    }
}
// top rated cars 
struct CompareByRating 
{
    bool operator()(const pair<float, Cars>& a, const pair<float, Cars>& b) 
    {
        return a.first < b.first; // max heap — higher rating comes first
    }
};


int main()
{
    //beaware of the zeros while adding your budget range
    int budget;
    string fuel, brand, transmission, size, features;
    char sortchoice;

    cout<<"                  Welcome to the CAR Recommendatoin System "<<endl;
    cout<<"                     Lets find the perfect car for you. "<<endl;

    //budget check
    cout<<" Enter your budget range (in PKR):    "<<endl;
    cin>>budget;
    cin.ignore();

    //fuel check
    cout<<" Enter fuel type preference (Petrol, Diesel, Hybrid, Electric):     "<<endl;
    getline(cin,fuel);

    //size and seating 
    cout<<" What type of car are you looking for (SUV, Sedan, Hatchback):   "<<endl;
    getline(cin,size);

    //technology and features
    cout<<" Any must have features (Luxury, Safety, Entertainment... )"<<endl;
    getline(cin,features);

    //brand check
    cout<<" Do you have any brand preferences? ";
    getline(cin,brand);

    cout<<"\n      Obviously you will buy a new car old one won't suit you."<<endl;

    

    cout<<"\n Filtering available cars based on your preferences...\n";
    if (tolowercase(fuel) != "any") 
        filterByFuel(vcars, fuel);

    if (tolowercase(brand) != "any") 
        filterByBrand(vcars, brand);


    // top 3 highest rated cars under budget
    cout<<"\n Top 3 highest rated cars within your BUDGET:\n";

    priority_queue<pair<float, Cars>, vector<pair<float, Cars>>, CompareByRating> topCars;
    for (const auto& car : vcars) 
    {
        if (car.price <= budget) 
            topCars.push({car.rating, car});
    }

    int count = 1;
    while (!topCars.empty() && count <= 3) 
    {
        auto top = topCars.top();
        topCars.pop();
        cout<<count<<". "<<top.second.name<<" | Brand: "<<top.second.brand<<" | Rating: "<<top.first<<" | Price: PKR "<<top.second.price<<endl;
        count++;
    }

    //Ask user: Show cars sorted by price?
    cout<<"\n Would you like to see all available cars sorted by price? (Y/N): ";
    cin>>sortchoice;

    if (sortchoice == 'Y' || sortchoice == 'y')
    {
        Pricenode* root = nullptr;

        //inserting all cars into the BST
        for (const auto& car : vcars) 
            root = insert(root, car);
    

        cout<<"\n All Cars Sorted by Price (Low to High):\n";
        inorder(root);
    }

    return 0;
}

