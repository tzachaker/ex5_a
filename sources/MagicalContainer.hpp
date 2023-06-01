#ifndef MAGICALCONTAINER_HPP
#define MAGICALCONTAINER_HPP
#include "MagicalContainer.hpp"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

namespace ariel
{
    class MagicalContainer
    {
        private:
            vector<int> _elements;

        public:
            MagicalContainer(){};
            void addElement(int element){};
            void removeElement(int element){};
            int size(){
                return _elements.size();};
            ~MagicalContainer(){};

            class AscendingIterator
            {
                private:

                public:
                    AscendingIterator(){};
                    AscendingIterator(MagicalContainer& mc){};
                    ~AscendingIterator(){};
                    AscendingIterator& operator=(const AscendingIterator& other){
                        return *this;}
                    bool operator==(const AscendingIterator& other) const {
                        return false;}
                    bool operator!=(const AscendingIterator& other) const {
                        return false;}
                    bool operator>(const AscendingIterator& other) const {
                        return false;}
                    bool operator<(const AscendingIterator& other) const {
                        return false;}
                    int operator*(){
                        return 0;}
                    AscendingIterator& operator++() {
                        return *this;}
                    AscendingIterator begin(){
                        return *this;};
                    AscendingIterator end(){
                        return *this;};
            };
            
            class SideCrossIterator
            {
                private:

                public:
                    SideCrossIterator(){};
                    SideCrossIterator(MagicalContainer& mc){};
                    ~SideCrossIterator(){};
                    SideCrossIterator& operator=(const SideCrossIterator& other){
                        return *this;}
                    bool operator==(const SideCrossIterator& other) const {
                        return false;}
                    bool operator!=(const SideCrossIterator& other) const {
                        return false;}
                    bool operator>(const SideCrossIterator& other) const {
                        return false;}
                    bool operator<(const SideCrossIterator& other) const {
                        return false;}
                    int operator*(){
                        return 0;}
                    SideCrossIterator& operator++() {
                        return *this;}
                    SideCrossIterator begin(){
                        return *this;};
                    SideCrossIterator end(){
                        return *this;};
            };

            class PrimeIterator
            {
                private:

                public:
                    PrimeIterator(){};
                    PrimeIterator(MagicalContainer& mc){};
                    ~PrimeIterator(){};
                    PrimeIterator& operator=(const PrimeIterator& other){
                        return *this;}
                    bool operator==(const PrimeIterator& other) const {
                        return false;}
                    bool operator!=(const PrimeIterator& other) const {
                        return false;}
                    bool operator>(const PrimeIterator& other) const {
                        return false;}
                    bool operator<(const PrimeIterator& other) const {
                        return false;}
                    int operator*(){
                        return 0;}
                    PrimeIterator& operator++() {
                        return *this;}
                    PrimeIterator begin(){
                        return *this;};
                    PrimeIterator end(){
                        return *this;};
            };
    };
}

#endif