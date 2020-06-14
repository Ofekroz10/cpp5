
#pragma once

#include <iostream>
using namespace std;
namespace itertools
{

    template <typename M>
    class accumulate
    {
    private:
        class iterator
        {
        private:
            int at;

        public:
            iterator(int at) : at(at) {}
            bool operator!=(iterator const &other) const { return at != other.at; }
            int const &operator*() const { return at; }
            iterator &operator++()
            {
                ++at;
                return *this;
            }
        };
        const M &m_container;

    public:
        accumulate(const M &container) : m_container(container)
        {
        }
        template <typename K>
        accumulate(const M &container, K funcor) : m_container(container)
        {
        }
        iterator begin()
        {

            return iterator(0);
        }
        iterator end()
        {
            return iterator(2);
        }
    };
}; // namespace itertools
