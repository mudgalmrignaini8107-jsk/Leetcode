struct Node {
    int sum;
    Node *left, *right;

    Node(int s = 0) {
        sum = s;
        left = right = nullptr;
    }
};

Node* build(int l, int r) {
    Node* node = new Node();

    if (l == r)
        return node;

    int mid = (l + r) / 2;

    node->left = build(l, mid);
    node->right = build(mid + 1, r);

    return node;
}

Node* update(Node* prev, int l, int r, int idx) {
    Node* cur = new Node();

    *cur = *prev;

    if (l == r) {
        cur->sum++;
        return cur;
    }

    int mid = (l + r) / 2;

    if (idx <= mid)
        cur->left = update(prev->left, l, mid, idx);
    else
        cur->right = update(prev->right, mid + 1, r, idx);

    cur->sum = cur->left->sum + cur->right->sum;

    return cur;
}