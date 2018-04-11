/**
 * \class LinkedList
 *
 * Kelas generik linkedlist
 *
 */


#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Point.hpp"
#include <iostream>
using namespace std;

template<class T>
struct node {
	node<T>* next;
	T data;
};

template <class T>
class LinkedList {
	public:
    	node<T>* first;
	node<T>* last;

	/* ctor */
	///default ctor
	LinkedList<T>() {
		first = NULL;
		last = NULL;
	}

	///check IsEmpty list
	bool IsEmpty() {
        return ((first == NULL) && (last == NULL));
	}

	///menambahkan data ke list
	void add(T data) {
		if(!first) {
            /* first == NULL, list masih kosong */
			first = new node<T>;
			first->data = data;
			first->next = NULL;
			last = first;
		} else {
			/* first != NULL, list sudah berisi */
			if(last == first) {
				/* list hanya berisi 1 elemen */
				last = new node<T>;
				last->data = data;
				last->next = NULL;
				first->next = last;
			} else {
				/* element > 1 */
				node<T>* insdata = new node<T>;
				insdata->data = data;
				insdata->next = NULL;
				last->next = insdata;
				last = insdata;
			}
		}
	}

	///mendapatkan nilai dari list berdasarkan index
	T get(int index) {
		if(index == 0) {
			/* Element ke 1 indexnya 0 */
			if (this->first != NULL) {
				return this->first->data;
			} else {
				return NULL;
			}
		} else {
			/* Cari elemen ke-index */
			node<T>* curr = this->first;
			for(int i = 0; i < index; ++i) {
				curr = curr->next;
			}
			if (curr != NULL) {
				return curr->data;
			} else {
				return NULL;
			}
		}
	}

	///mencari suatu elemen di list
	int find(T data) {
        bool found;
        found = false;
        int i;
        i = 0;
        node<T>* curr = this->first;
        while (((curr) != NULL) && (!(found))) {
            if (curr->data == data) {
                found = true;
            }
            else {
                curr = curr->next;
                i++;
            }
            }
        if (!found) {
            return -1;
        }
        else /* found */ {
            return i;
        }
    }

	///menghapus elemen list
	void remove(T data) {
        int a;
        a = find(data);

        if (a == -1) {
            std::cout << "Element tidak ada dalam list." << std::endl;
        }
        else if ((a == 0) && (first->next != NULL)) {
            node<T>* temp = new node<T>;
            temp = first;
            first = first->next;
            delete temp;
        }
        else if ((a == 0) && (first == last)) {
            first = NULL;
            last = NULL;
        }
        else if (a > 0) {
            node<T>* curr = new node<T>;
            node<T>* prev = new node<T>;
            curr = first;
            for (int i = 1; i < a; i++) {
                prev = curr;
                curr = curr->next;
            }
            prev->next = curr->next;
        }
    }

	///overloading operator[]
   	T operator[](int index) {
		return get(index);
	}


};

#endif
