#pragma once
#include<algorithm>

struct ChatRoom
{
	std::vector<Person * > people;
	void broadcast(const std::string & origin, const string & message);

	void join (Person * p);


	void message( const std::string & origin, const std::string & who, const std::string & message)

	{
		auto target = std::find_if(
			begin (people),
			end (people),
			[&] (const Person * p ) 
			{
				return p-> name == who;
			});


		if( target ! = end (people) )
		{
			(*target) -> receive( origin, message);

		}

	}


};
