#include "SeqList.h"

template<class T>
SeqList<T>::SeqList(int sz) {
	if (sz > 0) {
		maxSize = sz;
		last = -1;
		data = new T[maxSize];
		if (data == NULL) {
			cerr<<"mem allocate error!"<<endl;
		}
	}
}
