unsigned char	swap_bits(unsigned char octet)
{
    unsigned char bits = (octet >> 4) | (octet << 4);
    return (bits);
}
