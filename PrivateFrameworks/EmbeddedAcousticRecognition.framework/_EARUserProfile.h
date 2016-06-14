/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARUserProfile : NSObject {
    struct shared_ptr<quasar::LmeDataFactory> { 
        struct LmeDataFactory {} *px; 
        struct shared_count { 
            struct sp_counted_base {} *pi_; 
        } pn; 
    }  _dataFactory;
    struct shared_ptr<quasar::G2P> { 
        struct G2P {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _g2p;
    struct shared_ptr<quasar::PronCache<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > > > { 
        struct PronCache<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > > {} *px; 
        struct shared_count { 
            struct sp_counted_base {} *pi_; 
        } pn; 
    }  _pronCache;
    struct shared_ptr<quasar::LmeData> { 
        struct LmeData {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _quasarLmeData;
    struct BasicTextSanitizer { 
        int (**_vptr$TextSanitizer)(); 
        struct shared_ptr<quasar::URegularExpressionWrapper> { 
            struct URegularExpressionWrapper {} *px; 
            struct shared_count { 
                struct sp_counted_base {} *pi_; 
            } pn; 
        } mUnicodeOutliers; 
        struct shared_ptr<quasar::URegularExpressionWrapper> { 
            struct URegularExpressionWrapper {} *px; 
            struct shared_count { 
                struct sp_counted_base {} *pi_; 
            } pn; 
        } mSpecialChars; 
        struct shared_ptr<quasar::URegularExpressionWrapper> { 
            struct URegularExpressionWrapper {} *px; 
            struct shared_count { 
                struct sp_counted_base {} *pi_; 
            } pn; 
        } mDupSpacePattern; 
        struct shared_ptr<quasar::URegularExpressionWrapper> { 
            struct URegularExpressionWrapper {} *px; 
            struct shared_count { 
                struct sp_counted_base {} *pi_; 
            } pn; 
        } mCtrlCharsPattern; 
        int state; 
    }  _sanitizer;
    struct shared_ptr<sdapi::SdapiTokenizer> { 
        struct SdapiTokenizer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _tokenizer;
    struct map<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> >, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> > > >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> >, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> > > > > > > { 
        struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> >, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> > > > >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> >, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> > > > >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> >, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> > > > > > > { 
            struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> >, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> > > > >, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> >, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> > > > >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> >, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> > > > >, std::__1::less<std::__1::basic_string<char> >, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _userData;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addWordWithParts:(id)arg1 templateName:(id)arg2;
- (id)dataProfile;
- (id)initWithConfiguration:(id)arg1 language:(id)arg2 sdapiOverrides:(id)arg3 generalVoc:(id)arg4 emptyVoc:(id)arg5 pgVoc:(id)arg6 lexiconEnh:(id)arg7 tokenEnh:(id)arg8 paramsetHolder:(id)arg9;
- (id)initWithConfiguration:(id)arg1 withLanguage:(id)arg2 withSdapiOverrides:(id)arg3 withSdapiConfig:(id)arg4;
- (id)pronunciationsForOrthography:(id)arg1;
- (void)readUserProfile:(id)arg1;
- (void)removeAllWords;
- (id)sanitizedStringWithString:(id)arg1;

@end
