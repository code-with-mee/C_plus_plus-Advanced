#pragma once
#include <iostream>

using namespace std;

template<typename TKey, typename TValue>
class KeyValuePair
{
private:
	TKey key;
	TValue value;
public:
	KeyValuePair();
	KeyValuePair(TKey key, TValue value);
	TKey GetKey();
	TValue GetValue();
};

template<typename TKey, typename TValue>
inline KeyValuePair<TKey, TValue>::KeyValuePair()
{
	this->key = nullptr;
	this->value = nullptr;
}

template<typename TKey, typename TValue>
inline KeyValuePair<TKey, TValue>::KeyValuePair(TKey key, TValue value)
{
	this->value = value;
	this->key = key;
}

template<typename TKey, typename TValue>
inline TKey KeyValuePair<TKey, TValue>::GetKey()
{
	return this->key;
}

template<typename TKey, typename TValue>
inline TValue KeyValuePair<TKey, TValue>::GetValue()
{
	return this->value;
}
