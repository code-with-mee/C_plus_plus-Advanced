#pragma once
#include <iostream>
#include <vector>
#include "KeyValuePair.h"

using namespace std;

template<typename TKey, typename TValue>
class Dictionary
{
private:
	vector<KeyValuePair<TKey, TValue>> dictionary;
public:
	void Add(TKey key, TValue value);
	TValue GetValue(TKey key);
};

template<typename TKey, typename TValue>
inline void Dictionary<TKey, TValue>::Add(TKey key, TValue value)
{
	dictionary.push_back(KeyValuePair<TKey, TValue>(key, value));
}

template<typename TKey, typename TValue>
inline TValue Dictionary<TKey, TValue>::GetValue(TKey key)
{
	for (KeyValuePair<TKey, TValue> kv : dictionary)
	{
		if (kv.GetKey() == key)
			return kv.GetValue();
	}
	return NULL;
}
