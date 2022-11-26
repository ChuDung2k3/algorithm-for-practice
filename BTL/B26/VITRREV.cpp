#ifndef VectorItrRev_cpp
#define VectorItrRev_cpp 1
#include"Vector.cpp"
template <class T>
class VectorItrRev
{
	private :
		 Vector<T>* theVector;
		 int cur_Index;
	public:
		VectorItrRev(Vector<T>*V1)
		{
			theVector = V1;
			cur_Index = theVector->size() - 1;
		}
		int hasNext(){
			if (cur_Index >= 0)
				 return 1;
			else
				return 0;
		 }
		T next(){
			T o;
			theVector->getAtRank(cur_Index, o);
			cur_Index--;
			return o;
		}
};//End of class VectorItr
#endif
