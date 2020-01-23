#include "avcodec.h"

static av_cold int mainconcept_encode_init(AVCodecContext *avctx){
    return 0;
}

static int mainconcept_encode_frame(AVCodecContext *avctx, AVPacket *pkt, const AVFrame *pict, int *got_packet)
{
    return 0;
}

AVCodec ff_mainconcept_encoder = {
    .name           = "mainconcept",
    .long_name      = NULL_IF_CONFIG_SMALL("H.264 (Main Concept)"),
    .type           = AVMEDIA_TYPE_VIDEO,
    .id             = AV_CODEC_ID_H264,
    .init           = mainconcept_encode_init,
    .encode2        = mainconcept_encode_frame,
    // .pix_fmts       = (const enum AVPixelFormat[]){
    //     AV_PIX_FMT_BGRA, AV_PIX_FMT_BGR24,
    //     AV_PIX_FMT_RGB565, AV_PIX_FMT_RGB555, AV_PIX_FMT_RGB444,
    //     AV_PIX_FMT_RGB8, AV_PIX_FMT_BGR8, AV_PIX_FMT_RGB4_BYTE, AV_PIX_FMT_BGR4_BYTE, AV_PIX_FMT_GRAY8, AV_PIX_FMT_PAL8,
    //     AV_PIX_FMT_MONOBLACK,
    //     AV_PIX_FMT_NONE
    // }
};