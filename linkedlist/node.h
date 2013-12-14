#include<iostream.h>

using namespace std;

struct Node{
	private:
		void* _data;
		Node* _next;
		Node* _prev;
	public:
		Node(void* data,Node* next,Node* prev):_data(data):_next(next):_prev(prev){}
		(void*) getData()
		{
			return _data;
		}
		Node* getNext()
		{
			return _next;
		}
		Node* getPrev()
		{
			return _prev;
		}
		void setData(void* data)
		{
			_data = data;
		}
		void setNext(Node* next)
		{
			_next = next;
		}
		void setPrev(Node* prev)
		{
			_prev = prev;
		}

};
