#ifndef IMPORT_AS_MEMBER_PROTO_H
#define IMPORT_AS_MEMBER_PROTO_H

@import Foundation;

@protocol ImportedProtocolBase;
@protocol ImportedProtocolBase
@end
typedef NSObject<ImportedProtocolBase>
		* /*__has_attribute(objc_independent_class)*/ ImportedProtocolBase_t;

@protocol IAMProto;
@protocol IAMProto <ImportedProtocolBase>
@end
typedef NSObject<IAMProto>
		* /*__has_attribute(objc_independent_class)*/ IAMProto_t;

void mutateSomeState(IAMProto_t)
__attribute__((swift_name("IAMProto.mutateSomeState(self:)")));

#endif // IMPORT_AS_MEMBER_PROTO_H
