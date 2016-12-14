/* -*- c-file-style:"stroustrup"; indent-tabs-mode: nil -*- */
#if !defined INC_PBNTLM_CORE
#define      INC_PBNTLM_CORE

#include "pubnub_internal.h"
#include "pubnub_memory_block.h"


void pbntlm_core_init(pubnub_t *p);

void pbntlm_core_deinit(pubnub_t *pb);

void pbntlm_core_handle(pubnub_t *pb, char const* base64_msg);

int pbntlm_core_prep_msg_to_send(pubnub_t *pb, pubnub_bymebl_t* data);


#endif /* !defined INC_PBNTLM_CORE */