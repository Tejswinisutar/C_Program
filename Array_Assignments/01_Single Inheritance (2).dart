import 'dart:io';

class FurnitureShop {                                           //Base Class
  String FurnitureShopName = "Ansh Furniture Shop";
  String? location = "Patan";
  String? Admin = "Kisan Sutar";

 void FurnitureShopInformation() {
    stdout.writeln("***** Furniture Shop Information *******");
    stdout.writeln("FurnitureShop : $FurnitureShopName");
    stdout.writeln("Location : $location");
    stdout.writeln("Admin : $Admin");
  }
}
class FurnitureProduct extends FurnitureShop {                   //Derived Class
  String? ProductName, Category;
  double? price;

  void AcceptProductInformation() {
    stdout.write("Enter Furniture Product Name :");
    ProductName = stdin.readLineSync()!;
    stdout.write("Enter Category Type :");
    Category = stdin.readLineSync()!;
    stdout.write("Enter Price : ");
    price = double.parse(stdin.readLineSync()!);
  }
  void DisplayProductInformation() {
    stdout.writeln("----- Furniture Product Information -----");
    stdout.writeln("Product Name : $ProductName");
    stdout.writeln("Category : $Category");
    stdout.writeln("Price : ₹$price");
  }
}
int main() {                                               //Entry Point Function
  FurnitureProduct Product1 = FurnitureProduct(); 
  Product1.FurnitureShopInformation();                     //object create 
  Product1.AcceptProductInformation();                     //Method Calling 
  Product1.DisplayProductInformation();                     //Method Calling

  FurnitureProduct Product2 = FurnitureProduct();          
  Product1.FurnitureShopInformation();
  Product2.AcceptProductInformation();
  Product2.DisplayProductInformation();

  return 0;
}
