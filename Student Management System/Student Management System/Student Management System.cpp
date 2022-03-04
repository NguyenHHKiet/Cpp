// Student Management System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
using namespace std;
class student
{
public:
	void menu();
	void insert();
	void display();
	void modify();
private:
	string name, member, email, course, contact, address;
};

void student::menu()
{
	system("cls");
	menustart:

	int choice;
	char x;
	

	cout << "\t\t\t-------------------------" << endl;
	cout << "\t\t\tStudent Management System" << endl;
	cout << "\t\t\t-------------------------" << endl;
	cout << "\t\t\t 1. Tao moi Ho So SV" << endl;
	cout << "\t\t\t 2. Hien thi Ho So SV" << endl;
	cout << "\t\t\t 3. Chinh sua Ho So SV" << endl;
	cout << "\t\t\t 4. Tim kiem Ho So SV" << endl;
	cout << "\t\t\t 5. Xoa Ho So SV" << endl;
	cout << "\t\t\t 6. Thoat" << endl;

	cout << "\t\t\t-------------------------" << endl;
	cout << "\t\t\tChon Chuc nang: [1/2/3/4]" << endl;
	cout << "\t\t\t-------------------------" << endl;
	cout << "\t\t\tNhap so: ";
	cin >> choice;

	switch (choice)
	{
		case 1:
			do
			{
				insert();
				cout << "\n\t\t\t Ban co muon Tao them Ho So SV (Y/N): ";
				cin >> x;

			} while (x == 'y' || x == 'Y');
		
			break;
		case 2:

			display();
			break;
		case 3:
			modify();
			break;
		case 6:
			exit(0);
		default:
			cout << "\n\t\t\t Thoat";
	}
	
	goto menustart;
}

void student::insert() {
	system("cls");
	fstream file;
	cout << "\t\t\t----------- Tao moi Ho So SV -------------" << endl;
	cout << "\t\t\tNhap ten SV: ";
	cin >> name;
	cout << "\t\t\tNhap Ma So VS: ";
	cin >> member;
	cout << "\t\t\tNhap email: ";
	cin >> email;
	cout << "\t\t\tNhap Khoa hoc: ";
	cin >> course;
	cout << "\t\t\tNhap SDT lien he: ";
	cin >> contact;
	cout << "\t\t\tNhap Dia chi: ";
	cin >> address;

	file.open("student.txt", ios::app | ios::out);
	file << " " << member << " " << name << " " << email << " " << course << " " << contact << " " << address << "\n";
	file.close();
}

void student::display() {
	system("cls");
	fstream file;
	int total = 0;
	cout << "\t\t\t----------- Hien thi Ho So SV -------------" << endl;

	file.open("student.txt", ios::in);
	if (!file)
	{
		cout << "\n\t\t\tKhong Ho So SV ton tai.";
		file.close();
	}
	else
	{
		file >> member >> name >> email >> course >> contact >> address;
		while (!file.eof())
		{
			cout << "\n\t\t\t So thu tu: " << total++ + 1 << endl;
			cout << "\t\t\t Ma so SV: " << member << endl;
			cout << "\t\t\t Ten SV: " << name << endl;
			cout << "\t\t\t Email SV: " << email << endl;
			cout << "\t\t\t Khoa hoc: " << course << endl;
			cout << "\t\t\t SDT lien he: " << contact << endl;
			cout << "\t\t\t Dia chi: " << address << endl;
			file >> member >> name >> email >> course >> contact >> address;
		}
		if (total == 0)
		{
			cout << "\n\t\t\tKhong Ho So SV ton tai.";
		}
	}
	file.close();
}

void student::modify() {
	system("cls");
	fstream file, file1;
	string number;
	int found = 0;

	cout << "\t\t\t----------- Chinh sua Ho So SV -------------" << endl;
	
	file.open("student.txt", ios::in);
	if (!file)
	{
		cout << "\n\t\t\tKhong Ho So SV ton tai." << endl;
		file.close();
	}
	else
	{
		cout << "\t\t\tHay nhap ma so SV de chinh sua ho so." << endl;
		cout << "\t\t\tNhap Ma So SV: ";
		cin >> number;

		file1.open("studentModify.txt", ios::app | ios::out);
		file >> member >> name >> email >> course >> contact >> address;
		while (!file.eof())
		{
			if (number != member) {
				file1 << " " << member << " " << name << " " << email << " " << course << " " << contact << " " << address << "\n";
			}
			else
			{
				cout << "\t\t\tNhap ten SV: ";
				cin >> name;
				cout << "\t\t\tNhap Ma So VS: ";
				cin >> member;
				cout << "\t\t\tNhap email: ";
				cin >> email;
				cout << "\t\t\tNhap Khoa hoc: ";
				cin >> course;
				cout << "\t\t\tNhap SDT lien he: ";
				cin >> contact;
				cout << "\t\t\tNhap Dia chi: ";
				cin >> address;

				file1 << " " << member << " " << name << " " << email << " " << course << " " << contact << " " << address << "\n";
				found++;
			}
			file >> member >> name >> email >> course >> contact >> address;
			if (found == 0)
			{
				cout << "\t\t\tMa So SV khong tim thay!! " << endl;
			}
		}
		file1.close();
		file.close();
		remove("student.txt");
		rename("studentModify.txt", "student.txt");
	}
}


int main()
{
	student project;
	project.menu();

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
