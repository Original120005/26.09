#pragma once
#include <iostream>
using namespace std;

class Queue {
	int* Wait; 
	int MaxQueueLength; 
	int QueueLength; 

public:
	Queue(int m);
	~Queue();

	void Add(int c); 
	void Extract(); 
	void Clear(); 
	bool IsEmpty(); 
	bool IsFull(); 
	int GetCount(); 
	void Show();
	
	void FirstNum(int& obj) {
		const int n = Wait[1];
		obj = n;
	}
};

void Queue::Show() {
	cout << "\n ---\n";
	for (int i = 0; i < QueueLength; i++) {
		cout << "  " << Wait[i] << "\t";
	}
	cout << "\n ---\n";
}

Queue::~Queue() {
	delete[]Wait;
}

Queue::Queue(int m)
{
	
	MaxQueueLength = m;
	
	Wait = new int[MaxQueueLength];
	
	QueueLength = 0;
}

void Queue::Clear()
{
	
	QueueLength = 0;
}

bool Queue::IsEmpty()
{
	
	return QueueLength == 0;
}

bool Queue::IsFull()
{
	
	return QueueLength == MaxQueueLength;
}

int Queue::GetCount()
{
	
	return QueueLength;
}

void Queue::Add(int c)
{	
	if (!IsFull())
		Wait[QueueLength++] = c;
}

void Queue::Extract() {
	
	if (!IsEmpty()) {
		int min = 0, max = 1;
		int random = rand() % (max - min + 1) + min;
		int temp = Wait[0];

		for (int j = 0; j < random; j++) {
			for (int i = 1; i < QueueLength; i++) {
				Wait[i - random] = Wait[i];
			}
			int a = 1;
			Wait[QueueLength - a] = temp;
			a++;
		}
	}
}

void Queue::Extract() {
	if (!IsEmpty()) {
		int min = 0, max = 2;
		int random = rand() % (max - min + 1) + min;

		int temp = Wait[0];

		if (random == 0) {
			cout << "  random = " << random;
		}
		for (int j = 0; j < random; j++) {
			for (int i = 2; i < QueueLength; i++) {
				cout << "  random = " << random << "  ";
				Wait[i - random] = Wait[i];
			}
			int a = 1;
			Wait[QueueLength - a] = temp;
			a++;
		}

	}

}
