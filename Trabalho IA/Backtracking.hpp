//
//  Backtracking.hpp
//  Trabalho IA
//
//  Created by Yan Mendes on 27/04/17.
//  Copyright © 2017 Yan Mendes. All rights reserved.
//

#ifndef Backtracking_hpp
#define Backtracking_hpp

#include "SearchAlgorithm.hpp"

class Backtracking : public SearchAlgorithm {
private:
    void searchAlgorithm(Maze * m);
public:
    string getName();
};


#endif /* Backtracking_hpp */
