#ifndef _EVENTBASE_H_
#define _EVENTBASE_H_

#include<iostream>
#include<dequeue>
using namespace std;

class event_base{
	public:
		event_base();
		~event_base();
		
	private:
		eventop *evop;
		dequeue<event*> event_list;
		dequeue<event*> active_list;

		int event_count;
		int active_count;
};

#endif
