#ifndef _EVENTOP_H_
#define _EVENTOP_H_

#include<iostream>
using namespace std;

class eventop{
	public:
		eventop();
		virtual init()=0;
		virtual add(event* ev)=0;
		virtual del(event* ev)=0;
		virtual dispatch()=0;
		virtual dealloc()=0;

	private:
		event_base *evbase;
};

#endif
