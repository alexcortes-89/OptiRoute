#ifndef GRAPH_INTERFACE_H
#define GRAPH_INTERFACE_H

#include <vector>

class GraphInterface {
public:
    virtual ~GraphInterface() = default;
    virtual int nodeCount() const = 0;
    virtual double distance(int i, int j) const = 0;
    virtual std::vector<int> getNodeIds() const = 0;
};


#endif // GRAPH_INTERFACE_H
