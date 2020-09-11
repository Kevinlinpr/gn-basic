#ifndef BST_HPP
#include <iostream>

template <class DataType>
class BST{
public:
    DataType key;
    BST<DataType>* left;
    BST<DataType>* right;
    BST(const DataType& data):key(data){};
    static void inorderTreeWalk(BST<DataType>* data);
    static BST<DataType>* treeSearch(BST<DataType>* data,DataType key);
};

template <class DataType>
void BST<DataType>::inorderTreeWalk(BST<DataType>* data){
    if(data==nullptr){return;}
    BST<DataType>::inorderTreeWalk(data->left);
    std::cout<<data->key<<std::endl;
    BST<DataType>::inorderTreeWalk(data->right);
};

template <class DataType>
BST<DataType>* BST<DataType>::treeSearch(BST<DataType>* data,DataType key){
    if(data==nullptr||key==data->key){return data;};
    if(key<data->key){
        BST<DataType>::treeSearch(data->left,key);
    }else{
        BST<DataType>::treeSearch(data->right,key);
    }
};

#endif