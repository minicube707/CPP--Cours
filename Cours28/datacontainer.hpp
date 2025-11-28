
#ifndef DATACONTAINER_HPP
#define DATACONTAINER_HPP

    template <typename T>
    class DataContainer
    {
        public:
            DataContainer(T n): _n(n) {};
            T getData() const {return _n;};

        private:
            T _n;
    };

#endif