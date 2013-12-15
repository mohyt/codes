#ifndef NODE_H
#define NODE_H

struct Node{
	private:
		int _data;
		Node* _next;
		Node* _prev;
	public:
        Node():_next(NULL),_prev(NULL){}
		Node(int data,Node* next,Node* prev):_data(data),_next(next),_prev(prev){}
		int getData()
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
		void setData(int data)
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
#endif
