/*
Define: Dictionary frame
Author: iseonhwan
Date: 2021.10.12.
*/

#ifndef DITEM
#define DITEM

struct DItem{
	//entry is Name of Dictionary word, morpheme etc. if sound message, How? Think a later.
	char entry;
	
	//Information of syntax.
	  //Information about the relation of replacement.
	
	    //Part of Speech(POS): 
	    //POS value is No digit value, analogy value.
	    //Noun, Verb, Adjective, Determiner, Adverb, Conjunction etc. I disagree postposition as POS in common korean grammar theory.
	    //a port of POS is that the list is changing(noun, verb etc), the others is fix(determiner, conjunction etc). 
	
		// use inheritance of cpp? 
		
		struct PoS{ };
	
	  //Information about the relation of cooccurence.
	
	
	//Referential meaning
	
		//connect image or image value( ex: result of casecadeclassfier).
	
		// explanatory information as language. It is like a dictionary's explian.
	
	//Connotative meaning
	
	//Contextual meaning 

};


#endif DITEM
