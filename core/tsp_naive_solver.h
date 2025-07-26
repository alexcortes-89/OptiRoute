#ifndef TSP_NAIVE_SOLVER_H
#define TSP_NAIVE_SOLVER_H

#include "tsp_solver.h"

class TspNaiveSolver : public TspSolver
{
public:
    std::vector<int> solve(const GraphInterface& graph) override;
};

#endif // TSP_NAIVE_SOLVER_H
