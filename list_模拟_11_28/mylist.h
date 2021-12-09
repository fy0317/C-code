#ifndef __MYLIST_H
#define __MYLIST_H
#define _CRT_SECURE_NO_WARNINGS
#include<assert.h>
#include<algorithm>
namespace fy {
	template<class T>
	struct __list_node {
		__list_node(const T& x = T()): next(nullptr), pre(nullptr), val(x) {}
		typedef __list_node<T>* node;
		node next;
		node pre;
		T val;
	};

	template<class T, class Ref, class Ptr>
	struct __list_iterator {
		typedef __list_node<T>* link_type;
		typedef __list_iterator<T, T&, T*> iterator;
		typedef __list_iterator<T, const T&, const T*> const_iterator;
		typedef __list_iterator<T, Ref, Ptr> self;

		Ref operator*()const { return node->val; }
		Ptr operator->()const { return &(node->val); }
		bool operator==(const self& x) const { return node == x.node; }
		bool operator!=(const self& x)const { return node != x.node; }

		__list_iterator(link_type x) : node(x){}
		__list_iterator(){}
		__list_iterator(const self& x) : node(x.node){}

		self& operator++() { 
			node = node->next;
			return *this;
		}
		self operator++(int) {
			self tmp(*this);
			node = node->next;
			return tmp;
		}
		self& operator--() {
			node = node->pre;
			return *this;
		}
		self operator--(int) {
			self tmp(*this);
			node = node->pre;
			return tmp;
		}
		link_type node;
	};

	template<class T>
	class list {
	public:
		typedef __list_node<T> node;
		typedef __list_iterator<T, T&, T*> iterator;
		typedef __list_iterator<T, const T&, const T*> const_iterator;
	public:
		list() { 
			_head = new node; 
			_head->next = _head->pre = _head;
		}
		list(int n, const T& val = T()) {
			_head = new node;
			_head->next = _head->pre = _head;
			for (int i = 0; i < n; i++) {
				push_back(val);
			}
		}
		list(const list& l) {
			_head = new node;
			_head->next = _head->pre = _head;
			for (const auto& x : l) {
				push_back(x);
			}
		}
		template <class Iterator>
		list(Iterator first, Iterator last) {
			_head = new node;
			_head->next = _head->pre = _head;
			while (first != last) {
				push_back(*first);
				++first;
			}
		}
		list<T>& operator=(list<T> l) {
			std::swap(_head, l._head);
			return *this;
		}
		void pop_back() {
			erase(--end());
		}
		void pop_front() {
			erase(begin());
		}
		~list() {
			clear();
			delete _head;
			_head = nullptr;
		}
		void clear() {
			iterator it = begin();
			while (it != end()) {
				it = erase(it);
			}
		}
		iterator insert(iterator pos,const T& val) {
			node* cur = pos.node;
			node* pre = cur->pre;
			node* newnode = new node(val);
			pre->next = newnode;
			newnode->pre = pre;
			newnode->next = cur;
			cur->pre = newnode;
			return newnode;
		}
		iterator erase(iterator pos) {
			assert(pos != end());
			node* cur = pos.node;
			node* pre = cur->pre;
			node* next = cur->next;
			delete cur;
			pre->next = next;
			next->pre = pre;
			return next;
		}
		void push_back(const T& val) {
			node* newnode = new node(val);
			_head->pre->next = newnode;
			newnode->pre = _head->pre;
			newnode->next = _head;
			_head->pre = newnode;
		}
		void push_front(const T& val) {
			node* newnode = new node(val);
			newnode->next = _head->next;
			_head->next->pre = newnode;
			_head->next = newnode;
			newnode->pre = _head;
		}


		iterator begin()const { return _head->next; }
		iterator end()const { return _head; }

		size_t size()const {
			int cnt = 0;
			iterator it = begin();
			while (it != end()) {
				++it;
				++cnt;
			}
			return cnt;
		}
		bool empty()const {
			return begin() == end();
		}
	protected:
		node* _head;
	};
}


#endif // !__MYLIST_H

