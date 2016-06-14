/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKEventIdentifier : NSObject {
    const struct IOMappings { struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, int>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, int>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, int> > > { struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, int>, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, int>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; struct map<int, std::__1::basic_string<char>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::basic_string<char> > > > { struct __tree<std::__1::__value_type<int, std::__1::basic_string<char> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::basic_string<char> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::basic_string<char> > > > { struct __tree_node<std::__1::__value_type<int, std::__1::basic_string<char> >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, std::__1::basic_string<char> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::basic_string<char> >, std::__1::less<int>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; struct map<int, int, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, int> > > { struct __tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > > { struct __tree_node<std::__1::__value_type<int, int>, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; struct map<int, int, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, int> > > { struct __tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > > { struct __tree_node<std::__1::__value_type<int, int>, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_4_1_1; } x4; } * _ioMappings;
    RKMontrealModel * _model;
    int  _outputPermutation;
    struct Tokenizer { void *x1; struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; } * _tokenizer;
}

- (void).cxx_destruct;
- (id)_identifyOwnedTokenSequences:(struct vector<RKNaturalLanguageEvents::TokenSequence, std::__1::allocator<RKNaturalLanguageEvents::TokenSequence> > { struct TokenSequence {} *x1; struct TokenSequence {} *x2; struct __compressed_pair<RKNaturalLanguageEvents::TokenSequence *, std::__1::allocator<RKNaturalLanguageEvents::TokenSequence> > { struct TokenSequence {} *x_3_1_1; } x3; }*)arg1;
- (id)_identifyStrings:(id)arg1 otherDateCount:(unsigned long long)arg2 otherDates:(struct RKEventIdentifierRange { unsigned long long x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; }*)arg3;
- (void)dealloc;
- (id)identifyStrings:(id)arg1;
- (id)identifyText:(id)arg1;
- (id)init;
- (id)initWithLanguageID:(id)arg1;

@end
