#ifndef TSP_SOLVER_H
#define TSP_SOLVER_H

#include "graph_interface.h"
#include <vector>

class TspSolver {
public:
    virtual ~TspSolver() = default;
    virtual std::vector<int> solve(const GraphInterface& graph) = 0;
};


#endif // TSP_SOLVER_H
