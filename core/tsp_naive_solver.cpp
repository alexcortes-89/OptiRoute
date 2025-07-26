#include "tsp_naive_solver.h"
#include <vector>
#include <limits>
#include <algorithm>

std::vector<int> TspNaiveSolver::solve(const GraphInterface& graph) {
    std::vector<int> nodes = graph.getNodeIds();
    std::vector<int> bestPath;
    double bestCost = std::numeric_limits<double>::max();

    std::sort(nodes.begin(), nodes.end());
    do {
        double cost = 0;
        for (size_t i = 0; i + 1 < nodes.size(); ++i) {
            cost += graph.distance(nodes[i], nodes[i + 1]);
        }
        cost += graph.distance(nodes.back(), nodes.front());

        if (cost < bestCost) {
            bestCost = cost;
            bestPath = nodes;
        }
    } while (std::next_permutation(nodes.begin(), nodes.end()));

    return bestPath;
}
