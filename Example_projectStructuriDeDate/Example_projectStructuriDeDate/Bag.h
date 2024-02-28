#pragma once
//DO NOT INCLUDE BAGITERATOR


//DO NOT CHANGE THIS PART
#define NULL_TELEM -111111;

template <typename TElem>
class BagIterator; 

template <typename TElem>
class Bag {

private:
	//TODO - Representation

/*-----------------------------------------*/
	//capacity
	int cp;

	//size
	int n;

	//array of elements
	TElem *e;

	//for resizing the dynamic array
	void resize();
/*------------------------------------------*/

	//DO NOT CHANGE THIS PART
	friend class BagIterator<TElem>;
public:
	//constructor
	Bag();

	//adds an element to the bag
	void add(TElem e);

	//removes one occurrence of an element from a bag
	//returns true if an element was removed, false otherwise (if e was not part of the bag)
	bool remove(TElem e);

	//checks if an element appearch is the bag
	bool search(TElem e) const;

	//returns the number of occurrences for an element in the bag
	int nrOccurrences(TElem e) const;

	//returns the number of elements from the bag
	int size() const;

	//returns an iterator for this bag
	BagIterator<TElem> iterator() const;

	//checks if the bag is empty
	bool isEmpty() const;

	//destructor
	~Bag();
	;
};
