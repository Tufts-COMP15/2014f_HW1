#ifndef __hand_h__
#define __hand_h__

#include "card.h"
#include "List_dynamic_array.h"

class Hand {
public:
	Hand(); // constructor
	~Hand(); // desctructor
	void order_hand();
	void print_hand(){ hand.print_list(); }
	void print_hand_int() { hand.print_list_int(); }
	void add_card(Card c);
	
	bool remove_card(Card c); // returns true if the card was successfully
				  // removed, false otherwise
	void shuffle();
	Card deal_card_from_top(Hand &h);
	Card deal_card_from_bottom(Hand &h);

	bool has_card(Card c);
	void create_deck();
	void read_deck();
	int cards_in_hand() { return hand.cards_in_hand(); }
	
private:
	List_dynamic_array hand;
};

#endif // __hand_h__
