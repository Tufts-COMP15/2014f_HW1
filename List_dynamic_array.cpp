#include "List_dynamic_array.h"

#include <iostream>
#include <cassert>

using namespace std;

List_dynamic_array::List_dynamic_array()
{
	// create list
}

List_dynamic_array::~List_dynamic_array()
{
	// delete list
}

void List_dynamic_array::print_list()
{
	for(int i=0; i<cards_held; i++) {
		cards[i].print_card();
		if (i != cards_held-1) {
			cout << ",";
		} else {
			cout << "\n";
		}
	}
}

void List_dynamic_array::print_list_int()
{
	for(int i=0; i<cards_held; i++) {
		cards[i].print_card_int();
		if (i != cards_held-1) {
			cout << ", ";
		} else {
			cout << "\n";
		}
	}
}

void List_dynamic_array::insert_at_head(Card c)
{
	// check if we need to expand, and expand if necessary

	// move all items over one, starting from the last one

	// insert the new card

	// update cards_held
}

void List_dynamic_array::insert_at_tail(Card c)
{
	// check if we need to expand, and expand if necessary

	// insert the new card at the end

	// update cards_held
}

void List_dynamic_array::insert_at_index(Card c,int index)
{
	// if index is greater than cards_held, then fail
	assert(index <= cards_held);
	
	// check if we need to expand, and expand if necessary
	
	// move all elements past the insertion point up one
	
	// insert the card
	
	// update cards_held
}

void List_dynamic_array::replace_at_index(Card c, int index) {
	// if index is greater than cards_held-1, then fail
	assert(index < cards_held);
	
	// replace the card at index with c
}

Card List_dynamic_array::card_at(int index)
{
	// if index is out of bounds, fail
	assert (index >= 0 && index < cards_held);
	
	// return the card at index
}

bool List_dynamic_array::has_card(Card c) {
        // loop through the cards and use the same_card()
        // method in Card.cpp to compare the cards
        // Returns true if the card is in the hand, false otherwise
}

bool List_dynamic_array::remove(Card c)
{
	// find the card and remove from the hand
	// Returns true if the card was found and removed,
	// false otherwise
}

Card List_dynamic_array::remove_from_head()
{
	// if the list is empty, fail
	assert(cards_held > 0);

        // remove the card at the head, and move all the other
        // cards back one spot
        // Returns the card that was removed

}

Card List_dynamic_array::remove_from_tail()
{
	// if the list is empty, fail
	assert(cards_held > 0);

	// removes the card that is at the tail, and returns it
}

Card List_dynamic_array::remove_from_index(int index)
{
	// if the list is empty, fail
	assert(cards_held > 0);
	
	// if loc is outside of bounds, fail
	assert(index >= 0 && index < cards_held);

	// similar to remove_from_head(), but
	// we remove the card at index

	// Returns the card that was removed
	
}

void List_dynamic_array::expand()
{
	// five steps
	// 1. create new list with twice the capacity

	// 2. copy all cards to the new list

	// 3. delete the old list

	// 4. set cards variable to point to the new list

	// 5. update hand_capacity
}
