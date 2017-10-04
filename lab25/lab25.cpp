//Created by: Adam Ramirez 
//Created on: 10/03/2017
//Description: Class and mutator fucntion lab, creating a book class that captures data about each book. then implements set functions for each variable, get functions for each variable
//and prints all th data about a book. 
//Citation and References: Google search for each used book to confirm dates and spelling of author names

#include <iostream>
#include <string>
using namespace std;

class book {
    
    private:
    string title_;
    string author_;
    int copyright_;
    
    public:
        void SetBookTitle(string title);
        string GetBookTitle() const;
        void SetAuthor(string author);
        string GetAuthor() const;
        void SetCopyright(int year);
        int GetCopyright() const;
        
    void Print(){
        cout << " " << endl;
        cout << "Book Title: " << title_ << endl;
        cout << "Book Author: " << author_ << endl;
        cout << "Copyright Year: " << copyright_;
        cout << " " << endl;
}
    
   
};

 void book::SetBookTitle(string title){     //Sets book title variable
        title_ = title;
        
        return;
    }
    void book::SetAuthor(string author){    //Sets author variable
        author_ = author;
    }
    void book::SetCopyright(int year){      //Sets copyright variable
        copyright_ = year;
    }

    string book::GetBookTitle() const{      //matches the private variable with the choosen one in main for title
        return title_;
    }
    
    string book::GetAuthor() const{         //matches the private variable with the choosen one in main for author
        return author_;
    }
    int book::GetCopyright() const{         //matches the private variable with the choosen one in main for copyright
        return copyright_;
    }
    

int main(){
    string name;
    string author_name;
    int copy_year = 0;
    book book_one;
    book book_two;
    book book_three;
    book book_four;
    book book_five;
 
    cout << "Name of Book: ";           //book one
    getline(cin, name);
    book_one.SetBookTitle(name);
    
    cout << "Name of Author: ";
    getline(cin, author_name);
    book_one.SetAuthor(author_name);
    
    cout << "Copyright Year: ";
    cin >> copy_year;
    cin.ignore(1000, '\n');
    book_one.SetCopyright(copy_year);   //end book one
    
    cout << "Name of Book: ";            //book two
    getline(cin, name);
    book_two.SetBookTitle(name);
    
    cout << "Name of Author: ";
    getline(cin, author_name);
    book_two.SetAuthor(author_name);
    
    cout << "Copyright Year: ";
    cin >> copy_year;
    cin.ignore(1000, '\n');
    book_two.SetCopyright(copy_year);       //end book two
    
    cout << "Name of Book: ";            //book three
    getline(cin, name);
    book_three.SetBookTitle(name);
    
    cout << "Name of Author: ";
    getline(cin, author_name);
    book_three.SetAuthor(author_name);
    
    cout << "Copyright Year: ";
    cin >> copy_year;
    cin.ignore(1000, '\n');
    book_three.SetCopyright(copy_year); //end book three
    
    cout << "Name of Book: ";            //book four
    getline(cin,name);
    book_four.SetBookTitle(name);
    
    cout << "Name of Author: ";
    getline(cin, author_name);
    book_four.SetAuthor(author_name);
    
    cout << "Copyright Year: ";
    cin >> copy_year;
    cin.ignore(1000, '\n');
    book_four.SetCopyright(copy_year);  //end book four
    
    cout << "Name of Book: ";            //book five
    getline(cin,name);
    book_five.SetBookTitle(name);
    
    cout << "Name of Author: ";
    getline(cin, author_name);
    book_five.SetAuthor(author_name);
    
    cout << "Copyright Year: ";
    cin >> copy_year;
    book_five.SetCopyright(copy_year);  
    
    
    book_one.Print();
    book_two.Print();
    book_three.Print();
    book_four.Print();
    book_five.Print();
}
/*Expected output(with user input):
Book Title: Sorcerer's Stone
Book Author: JK Rowling
Copyright Year: 1997 
 
Book Title: The Hobbit
Book Author: JRR Tolkien
Copyright Year: 1987 
 
Book Title: The Fellowship of the Ring
Book Author: JRR Tolkien
Copyright Year: 1954 
 
Book Title: A Song of Ice And Fire
Book Author: RR Martin
Copyright Year: 1996 
 
Book Title: Cat in the Hat
Book Author: Dr Seuss
Copyright Year: 1957 
*/

